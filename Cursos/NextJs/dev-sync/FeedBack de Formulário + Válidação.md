---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: actions.tsx
nivel: intermediario
dominado: false
data: 2026-08-22
tipo: feature
---

# FeedBack de Formulário + Válidação

## O que essa feature faz

## Passo a passo da lógica

1. Crie um tipo para tipar as mensagens
2. Adicionar como atributo em nossa função
3. Declarar no componente ui
4. Renderizar na ui

## Técnica / conceito por trás

## Onde está no código

- `app/actions.ts`

## Exemplo

```tsx
// Componente ui - formulário
import { useActionState } from "react";
import  type { FormState } from "./app/actions";

export default function editNote() {
  const [formState, formAction] = useActionState(newNote, {
    message: "",
    type: "success",
  } as FormState); // Isso vem da nossa tipagem de mensagens no actions(backend)
  return (
    {
      formState.message && (
        <p>{formState.message} {formState.type}</p>
    )} // renderização ternária para ver nossa mensagem
    <form action={formAction}> // Chama nossa função (newNote)
      <input placeholder="Digite o titulo da nota" id="title" type="text" />
      <textarea placeholder="Digite o conteúdo da nota" id="content"></textarea>
    </form>
  );
}
```

```tsx
export type FormState = {
  message: string;
  type: "success" | "error";
}; // nossa tipagem de tratamento de erros

export default async function newNote(
  formState: FormState,
  formData: FormData,
): Promise<FormState> {
  // Oque os atributos dizem:
  // Ele vai receber um formState do tipo que tipamos ali encima
  // Ele vai receber um formData que vem do nosso formAction la do ui
  // E promete (promise) que vai retornar um formState
  const title = formData.get("title");
  const content = formData.get("content");
  
  if(title.trim().lenght > 5) {
  return {message: "O titulo deve conter 5 caracteres", type:"error" }
  }
   if(content.trim().lenght > 8) {
  return {message: "O titulo deve conter 8 caracteres", type: "error"}
  } // Verificação para não ir vazio podemos fazer essa verificação no ui desabilitando o botão de envio mais é necessario também validar no backend
  
  return { message: "olá mundo!", type: "success" };
}

```

## Checklist de revisão

- [ ] Sei explicar sem olhar o código
- [ ] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados
[[Renderização ternária]] [[Editar Perfil]] 