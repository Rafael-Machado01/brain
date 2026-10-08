# Brainstorm — TCC: App Mobile de Doação de Sangue e Medula Óssea

## 1. Visão geral

App mobile que conecta **pacientes que precisam de sangue** com **doadores compatíveis**, facilitando a combinação de onde e como a doação será feita. A **medula óssea** entra como conteúdo **informativo** (sem pedidos).

---

## 2. Decisões já tomadas

- App **mobile**
- **Sangue:** parte transacional (pedidos, notificações, chat)
- **Medula óssea:** apenas informativo
- Fluxo principal, MVP e versão 2 validados
- Compartilhamento por WhatsApp: o app gera uma **imagem com as informações do pedido**
- **Verificação de pedidos**, para poder impulsionar os verificados
- **Área educativa** e **gamificação leve** aprovadas

---

## 3. Pontos de atenção que mudam o desenho

### Sangue x medula
- **Sangue:** compatibilidade por tipo sanguíneo (ABO + Rh). O app deve considerar os tipos **compatíveis**, não só o igual (ex.: O- doa para todos).
- **Medula:** compatibilidade por **HLA**, com cadastro pelo REDOME. Um "pedido de paciente" não funciona bem aqui, por isso o módulo é informativo.

### Quem realiza a doação
- No Brasil, a doação de sangue é voluntária e feita em **hemocentros e bancos de sangue**, com triagem clínica.
- O chat serve para **coordenar** (quem vai, quando, em qual hemocentro), não para doação direta entre desconhecidos.

---

## 4. Fluxo principal

1. O paciente (ou familiar) cria um **pedido**: tipo sanguíneo, local/hemocentro, urgência, quantidade de doadores e prazo.
2. O app encontra doadores **compatíveis e próximos** e envia **notificação**.
3. O doador abre o pedido e toca em **"Quero ajudar"**.
4. Abre-se um **chat** entre os dois, vinculado ao pedido.
5. Após a doação, o pedido é atualizado e o doador ganha um registro no histórico.

---

## 5. Features

### MVP
- Cadastro e login com perfil de **doador** (tipo sanguíneo, cidade, disponibilidade) e de **paciente/solicitante**
- Criação de **pedido** (o "post") com tipo, local, urgência e prazo
- **Feed** de pedidos filtrado por compatibilidade e distância
- **Notificações push** para doadores compatíveis
- **Chat** dentro do app, vinculado ao pedido
- **Status do pedido:** aberto, em andamento, atendido, expirado
- **Controle de elegibilidade:** intervalo mínimo entre doações e botão "indisponível agora"

### Versão 2
- **Mapa de hemocentros** e bancos de sangue próximos, com horários
- **Questionário de pré-triagem** ("posso doar?") com as regras básicas
- **Histórico de doações** e lembrete de quando o doador pode doar de novo
- **Compartilhar pedido** por WhatsApp e redes sociais, com **imagem gerada pelo app**
- **Verificação do pedido** (comprovante ou confirmação do hemocentro) e **impulsionamento** dos verificados

### Diferenciais
- **Área educativa:** mitos e verdades, como é o processo, o que esperar (sangue e medula)
- **Seção de medula óssea:** o que é o REDOME, como se cadastrar
- **Gamificação leve:** conquistas, contador de vidas impactadas
- **Campanhas sazonais** e alertas de estoque baixo por tipo sanguíneo

---

## 6. Painel do hemocentro (ainda em aberto)

Versão **web** (ou área separada) usada pela instituição, não pelo usuário comum.

### O que o hemocentro faria
- **Verificar pedidos** do seu local (conecta com o impulsionamento)
- **Confirmar doações** realizadas (atualiza histórico, libera gamificação e fecha o pedido)
- **Criar campanhas** (ex.: estoque de O- baixo)
- **Ver a demanda:** pedidos abertos, tipos mais pedidos, doações concluídas por região

### Por que vale a pena
- Dá credibilidade e reduz pedidos falsos
- Fecha o ciclo: pedido, doador, doação confirmada
- Tem parte de dados e gráficos, que combina com BI e bancos de dados

### Níveis de escopo
1. **Sem painel:** verificação feita por um administrador interno do sistema
2. **Simples:** login de hemocentro, lista de pedidos para verificar e botão "confirmar doação" *(sugerido como melhor custo-benefício)*
3. **Completo:** o simples mais campanhas e gráficos de demanda *(sugerido como trabalho futuro)*

**Decisão pendente:** verificação e confirmação virem do hemocentro (painel) ou de um administrador interno?

---

## 7. Contato com hemocentros

Não é necessário um projeto com a prefeitura. Caminhos possíveis:

1. **Tudo simulado:** sistema completo com dados fictícios e painel simulado. Suficiente para a banca avaliar projeto, modelagem e implementação.
2. **Contato para validação** *(melhor custo-benefício)*: pedir uma **entrevista** com alguém da captação de doadores do hemocentro, hemonúcleo ou agência transfusional da região. Levar **carta de apresentação da faculdade**. Rende depoimentos e validação dos requisitos.
3. **Parceria institucional** (prefeitura, secretaria de saúde, hemocentro, piloto real): burocrático, lento e com cuidados de LGPD. Deixar como **trabalhos futuros**.

**Sugestão:** combinar 1 e 2 e conversar antes com o **orientador**.

---

## 8. Riscos e cuidados

- **LGPD:** tipo sanguíneo é dado de saúde (sensível). Pedir consentimento explícito, coletar o mínimo e expor pouco publicamente.
- **Privacidade no chat:** mostrar só o primeiro nome, não expor telefone, ter denúncia e bloqueio.
- **Abuso e fraude:** pedidos falsos e spam. Verificação e limite de pedidos ativos ajudam.
- **Localização:** usar localização aproximada (cidade/bairro) em vez da exata.

---

## 9. Perguntas em aberto

- [ ] Verificação e confirmação: hemocentro (painel) ou administrador interno?
- [ ] Nível do painel: 1, 2 ou 3?
- [ ] Já existe orientador definido?
- [ ] Qual hemocentro ou agência transfusional da região procurar para a entrevista?

---

## 10. Próximos passos sugeridos

1. Fechar as decisões em aberto acima
2. Levantar **requisitos** (funcionais e não funcionais)
3. Definir as **telas principais** e o fluxo de navegação
4. Modelar o **banco de dados**
5. Escolher a **stack** do app mobile
6. Só então partir para o código

---

## 11. Sugestões adicionais (a avaliar)

Ajustes que deixam o TCC mais forte tecnicamente e mais defendível na banca, sem aumentar demais o escopo.

### 11.1 "Paciente" vira "Solicitante"
Quem cria o pedido pode ser:
- paciente;
- familiar;
- responsável autorizado;
- instituição/serviço autorizado (dependendo do escopo).

Assim o sistema não precisa comprovar que a pessoa é realmente o paciente.

Campos do pedido:

```text
Solicitante
Tipo sanguíneo necessário
Hemocentro/local
Quantidade necessária
Prazo
Urgência
Motivo/observação
Status
Verificação
Código/identificação do pedido no hemocentro (não necessariamente público; uso futuro para validação)
```

> Obs.: no campo "motivo/observação", evitar detalhes de saúde do paciente em texto público (LGPD).

### 11.2 Sistema de prioridade
- 🟢 **Normal:** doação necessária, sem prazo imediato
- 🟡 **Urgente:** necessidade dentro de poucos dias
- 🔴 **Emergencial:** necessidade imediata

A distribuição das notificações considera:

```text
compatibilidade + distância + disponibilidade + urgência + prazo
```

Argumento para a banca: o sistema não apresenta todos os pedidos, ele prioriza os de maior relevância para cada doador.

### 11.3 Algoritmo de compatibilidade como diferencial
Não basta `doador.tipo == pedido.tipo`. Usar uma **matriz de compatibilidade**:

| Doador | Pode doar para                   |
| ------ | -------------------------------- |
| O-     | O-, O+, A-, A+, B-, B+, AB-, AB+ |
| O+     | O+, A+, B+, AB+                  |
| A-     | A-, A+, AB-, AB+                 |
| A+     | A+, AB+                          |
| B-     | B-, B+, AB-, AB+                 |
| B+     | B+, AB+                          |
| AB-    | AB-, AB+                         |
| AB+    | AB+                              |

Operação do backend: `buscarPedidosCompativeis(doador)`, depois filtrar por distância.

> Obs.: essa matriz vale para **hemácias** (sangue total/concentrado de hemácias). Para plasma a lógica é inversa, e o hemocentro pode ter critérios próprios. Vale citar isso no texto do TCC e confirmar com o hemocentro na entrevista.

### 11.4 Disponibilidade do doador
Perfil de exemplo:

```text
🩸 O+
📍 Assis - SP

Disponibilidade:
☑ Posso receber notificações
☐ Estou indisponível

Próxima data estimada: 15/11/2026
```

O sistema deixa de notificar quem está indisponível ou ainda não está apto segundo a regra cadastrada. Isso também evita spam.

### 11.5 "Estou indo doar"
Além de "Quero ajudar":

```text
Quero ajudar → Estou indo doar → Escolher data/horário → Confirmar
→ Pedido recebe +1 doador a caminho
```

Status do pedido:

```text
ABERTO → EM ANDAMENTO → ATENDIDO
```

Estados internos da participação:

```text
Interessado → Confirmado → A caminho → Doação confirmada
```

### 11.6 Separar "pedido" de "participação" e "doação" (modelagem)
Um pedido pode ter vários doadores, então não modelar `Pedido → doador`:

```text
Pedido
 ├── Participação (Doador)
 ├── Participação (Doador)
 └── Participação (Doador)

Participação → Doação confirmada
```

Exemplo:

```text
Pedido #123 | O+ | Hospital X | Necessidade: 5 doadores
Doador A → confirmado
Doador B → confirmado
Doador C → interessado
Doador D → doação confirmada
```

### 11.7 Histórico de doações já no MVP (versão simples)
Fecha o ciclo: pedido → quero ajudar → doação → confirmação → histórico.

O perfil mostra, por exemplo: 🩸 4 doações confirmadas · ❤️ 4 pedidos ajudados · 🏆 2 conquistas. Sem informações médicas detalhadas.

### 11.8 Gamificação sem ranking
- **Sem ranking** ("Top 10 doadores"): incentiva comportamento estranho e é inadequado para uma aplicação de saúde.
- Usar **conquistas**:
  - 🩸 Primeira doação
  - ❤️ Primeira ajuda
  - 🔥 Doador recorrente (3 doações)
  - 📅 Constância
- Elemento visual: "Você já ajudou X pessoas".

### 11.9 Sistema de confiança (verificação)
- 🔵 **Pedido não verificado:** criado por usuário
- 🟢 **Pedido verificado:** confirmado pelo hemocentro/administrador

Regra: pedidos verificados têm prioridade de divulgação.

```text
verificação → algoritmo → notificações → confiança
```

### 11.10 Painel do hemocentro (nível 2)
Estrutura:

```text
Dashboard
├── Pedidos (Pendentes / Verificados / Encerrados)
├── Doações (Confirmar doação)
└── Campanhas
```

Indicadores de exemplo: pedidos abertos, pedidos urgentes, doações confirmadas e pedidos por tipo sanguíneo. É aqui que entra a parte de BI/dados.

### 11.11 Campanhas como entidade própria

```text
Campanha
- título
- descrição
- tipo sanguíneo
- cidade/região
- início
- fim
- imagem
- status
```

Exemplos: "Junho Vermelho", "Estoque O- em atenção". Aparecem no feed.

### 11.12 Demanda por região (análise de dados)
- Demanda por tipo sanguíneo (gráfico de barras)
- Demanda por região/cidade

Transforma o projeto de "um app para encontrar doadores" em **uma plataforma para coordenação e análise da demanda por doações**.

### 11.13 Medula óssea: manter só informativo
Seção sem pedidos, com:
- O que é
- Quem pode se cadastrar
- Como funciona o REDOME:

```text
Cadastro → Coleta → Registro no REDOME → Possível compatibilidade
→ Contato → Avaliação → Doação
```

- Mitos e verdades

### 11.14 Área educativa como "Central de conhecimento"

```text
📚 Central de conhecimento
├── 🩸 Doação de sangue
│    ├── Quem pode doar?
│    ├── Como funciona?
│    ├── Antes da doação
│    ├── Depois da doação
│    └── Mitos e verdades
└── 🧬 Medula óssea
     ├── O que é?
     ├── REDOME
     ├── Cadastro
     ├── Compatibilidade
     └── Mitos e verdades
```

Colocar **fontes oficiais** em cada conteúdo (importante por ser tema de saúde).

### 11.15 O que NÃO colocar no escopo
Cada item abaixo abre a porta para outro TCC inteiro:
- ❌ localização em tempo real
- ❌ rastreamento do doador
- ❌ videochamada
- ❌ pagamento/recompensa financeira
- ❌ doação direta entre usuários
- ❌ integração real com hospitais, inicialmente
- ❌ IA para diagnóstico
- ❌ IA para decidir quem pode doar
- ❌ reconhecimento facial
- ❌ prontuário médico

### 11.16 Denúncias e moderação
Como há chat e pedidos públicos:
- Denunciar pedido
- Denunciar usuário
- Bloquear usuário

No painel:

```text
Denúncias
├── Pendentes
├── Em análise
└── Resolvidas
```

### 11.17 Segurança como requisito não funcional
- senha armazenada com hash;
- autenticação;
- autorização por função;
- comunicação HTTPS;
- controle de acesso;
- proteção contra acesso a pedidos de outros usuários;
- logs de ações administrativas;
- bloqueio/denúncia.

**Controle de acesso por função:**

```text
DOADOR       → pedidos / chat / histórico
SOLICITANTE  → criar pedido / acompanhar pedido / chat
HEMOCENTRO   → verificar / confirmar / campanhas
ADMIN        → moderação / usuários / sistema
```

### 11.18 Módulos do sistema

```text
APP MOBILE
├── Autenticação
├── Perfil
├── Pedidos
├── Compatibilidade
├── Notificações
├── Chat
├── Doações
├── Histórico
├── Gamificação
├── Educação
└── Medula óssea

PAINEL WEB
├── Dashboard
├── Pedidos
├── Verificação
├── Doações
├── Campanhas
├── Denúncias
└── Relatórios
```

### 11.19 Matriz de requisitos (rascunho)

| ID   | Requisito                          | Prioridade |
| ---- | ---------------------------------- | ---------- |
| RF01 | Cadastrar usuário                  | Alta       |
| RF02 | Informar tipo sanguíneo            | Alta       |
| RF03 | Criar pedido de doação             | Alta       |
| RF04 | Calcular compatibilidade           | Alta       |
| RF05 | Filtrar por distância              | Alta       |
| RF06 | Enviar notificação                 | Alta       |
| RF07 | Demonstrar interesse               | Alta       |
| RF08 | Conversar pelo chat                | Alta       |
| RF09 | Confirmar doação                   | Alta       |
| RF10 | Manter histórico                   | Média      |
| RF11 | Verificar pedido                   | Alta       |
| RF12 | Criar campanhas                    | Média      |
| RF13 | Gerar imagem para compartilhamento | Média      |
| RF14 | Gamificação                        | Baixa      |
| RF15 | Conteúdo sobre medula              | Média      |

Requisitos não funcionais:

```text
RNF01 - Segurança
RNF02 - Privacidade
RNF03 - Disponibilidade
RNF04 - Usabilidade
RNF05 - Desempenho
RNF06 - Escalabilidade
RNF07 - LGPD
```

### 11.20 Escopo final sugerido

**🎯 Núcleo (doação de sangue):** cadastro, tipo sanguíneo, pedidos, compatibilidade, distância, notificações, interesse em doar, chat, status, confirmação, histórico.

**🏥 Módulo institucional:** login do hemocentro, verificação de pedidos, confirmação de doações, campanhas, dashboard.

**🧬 Módulo educativo:** sangue, medula, REDOME, mitos e verdades.

**🌟 Extras:** compartilhamento por imagem, gamificação, conquistas, campanhas sazonais.

**🔐 Transversal:** LGPD, segurança, denúncias, bloqueios, controle de acesso.

### 11.21 Como apresentar a ideia central

> **"Uma plataforma móvel para facilitar a mobilização, coordenação e acompanhamento de doadores de sangue, utilizando compatibilidade sanguínea, proximidade, notificações e verificação institucional."**

Isso reúne problema, solução, tecnologia, regra de negócio, instituição e dados.

### 11.22 Arquitetura de alto nível

```text
                  ┌──────────────────┐
                  │    HEMOCENTRO    │
                  │    PAINEL WEB    │
                  └────────┬─────────┘
                           │
                      verificação
                           │
                           ▼
┌──────────────┐     ┌───────────────┐     ┌──────────────┐
│ SOLICITANTE  │────▶│    BACKEND    │◀────│    DOADOR    │
└──────────────┘     │ Compatibilidade│    └──────────────┘
                     │ Distância      │
                     │ Notificações   │
                     │ Pedidos        │
                     │ Chat           │
                     │ Doações        │
                     └───────┬───────┘
                             │
                    ┌────────▼────────┐
                    │  BANCO DE DADOS │
                    └─────────────────┘
```

### 11.23 Próximo passo recomendado
**Não escolher a stack ainda.** Primeiro transformar o brainstorm em: escopo fechado, requisitos funcionais/não funcionais, casos de uso e entidades do banco. Depois disso a stack tende a se definir sozinha.

Possível desdobramento: uma especificação inicial do TCC com problema, justificativa, objetivo geral, objetivos específicos, escopo, requisitos, atores, casos de uso e módulos.
