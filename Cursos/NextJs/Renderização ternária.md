---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: ""
nivel: simples
dominado: true
data: 2026-08-18
tipo: feature
---

# Renderização ternária

## O que essa feature faz
Permite que uma variavel controle se o conteúdo na nossa aplicação apareça ou não.

## Passo a passo da lógica

1. Define a variavel
2. Adicione a logica de renderização

## Técnica / conceito por trás
Crie um state do tipo booleano. 
Se for true renderize
Se for false não renderize
## Onde está no código

```
import {useState} from "react";
const [isVisible,setIsVisible] = useState(false);
// variável

const handleClickVisible() {
	setIsVisible(!isVisible);
	// Função que alterna o valor da váriavel.
}

return (
 {isVisible && (<p>Se for true você me ve</p>) }
 
 {isVisible ? (<p>Se for true você me ve</p>) : <p>Se for false voce me ve</p> }
)

```


## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados
[[Condição Ternário e And]]
