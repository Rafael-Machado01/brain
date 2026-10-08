#!/usr/bin/env bash

CARD_ALSA="hw:0"
CARD_PW="alsa_card.pci-0000_00_1f.3-platform-skl_hda_dsp_generic"
JACK_NUMID=12

log() {
  echo "[$(date '+%H:%M:%S')] $*"
}

get_profile() {
  local keyword="$1"
  pactl list cards 2>/dev/null | awk -v card="$CARD_PW" '
    /^Card #/{p=0}
    $0 ~ "Name: "card {p=1}
    p' | grep -P "^\s*HiFi \([^)]*\): " | grep -P "\b${keyword}\b" | sed -E 's/^[[:space:]]*(HiFi \([^)]*\)):.*/\1/' | head -1
}

apply_profile() {
  local jack_state
  jack_state=$(amixer -c0 cget numid=${JACK_NUMID} 2>/dev/null | grep -oP 'values=\K(on|off)')
  log "jack_state=${jack_state:-<vazio>}"

  local target
  if [[ "$jack_state" == "on" ]]; then
    target=$(get_profile "Headphones")
  else
    target=$(get_profile "Speaker")
  fi
  log "target profile=${target:-<vazio>}"

  if [[ -n "$target" ]]; then
    if pactl set-card-profile "$CARD_PW" "$target" 2>&1; then
      log "aplicado com sucesso: $target"
    else
      log "pactl set-card-profile falhou (ignorando, seguindo vivo)"
    fi
  else
    log "nenhum perfil correspondente encontrado, pulando"
  fi
}

log "script iniciado"
apply_profile

log "entrando no loop de monitoramento"
alsactl monitor "$CARD_ALSA" 2>&1 | while read -r line; do
  log "evento: $line"
  if [[ "$line" == *"#${JACK_NUMID} "* ]]; then
    log "evento do jack de fone detectado"
    apply_profile
  fi
done
log "loop de monitoramento encerrou (isso não deveria acontecer)"
