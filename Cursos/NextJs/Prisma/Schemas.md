---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: schema.prisma
nivel: simples
dominado: false
data: 2026-08-18
tipo: feature
---

# Schemas

## O que essa feature faz

Cria tabelas no Prisma: o model no `schema.prisma` vira tabela no banco depois da migration.

## Passo a passo da lógica

1. Crie um model no `schema.prisma`
2. Execute uma migration para refletir no banco de dados

## Técnica / conceito por trás

Exemplo de tabela:

```prisma
model User {
  id            String          @id @default(cuid())
  name          String?
  email         String?         @unique
  title         String?
  bio           String?
  background    String?
  location      String?
  emailVerified DateTime?
  image         String?
  accounts      Account[]
  sessions      Session[]
  // Optional for WebAuthn support
  Authenticator Authenticator[]

  // Relações da aplicação
  posts    Post[]
  likes    Like[]
  comments Comment[]

  createdAt DateTime @default(now())
  updatedAt DateTime @updatedAt
}

npx prisma format para formatação na identação
```

```bash
npx prisma migrate dev
```

A migration gera um SQL versionado em `prisma/migrations/` e aplica no banco. Os campos `accounts`, `sessions` e `Authenticator` são os modelos do Auth.js ([[AuthJs/Instalação|Instalação]]) ligados ao User por relação.


![[Pasted image 20260826202948.png]]
```prisma
model TipoAnimal {
  id        String  @id @default(cuid())
  descricao String
  animais Animal[]
}

model Animal {
  id         String       @id @default(cuid())
  nome       String
  tipoAnimal  TipoAnimal @relation(fields: [tipoAnimalId], references: [id])
  tipoAnimalId String
  idade      Int
  peso       Float
  valor      Float
  round      Round?       @relation(fields: [roundId], references: [id])
  roundId    String?
}

model Round {
  id             String       @id @default(cuid())
  competidorId String
  competidor     Competidor @relation(fields: [competidorId],references: [id])
  animalId  String
  animal         Animal @relation(fields: [animalId],references: [id])
  data           DateTime
  notaAnimal     Float
  notaCompetidor Float
  penalidade     Float
}

model Competidor {
  id       String   @id @default(cuid())
  nome     String
  cidade   Cidade[]
  idade    Int
  vitorias Int
  cidadeId String
  cidade Cidade @relation(fields: [cidadeId], references: [id])
}

model Cidade {
  id           String      @id @default(cuid())
  descricao    String
  estado       String
  competidores Competidor[]
}

```
## Pegadinhas que me confundiram

- Não executar migrate após uma atualização no schema → o banco fica desatualizado e o Prisma reclama que o schema está "out of sync" com o banco.


```shell
pnpm primsa validate // comando para ver se tem algum erro no schema escrito

pnpm primsa format // comando para formatar o schema no modo prisma
```
## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Prisma/Instalação|Instalação]]
