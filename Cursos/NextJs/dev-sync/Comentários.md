---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: actions.tsx
nivel: intermediario
dominado: false
data: 2026-08-18
tipo: feature
---

# Comentários

## O que essa feature faz
Permite usuario a criar novos comentários

## Passo a passo da lógica

1. Pegar dados do formulario
2. Passar para o backend e validar
3. Sendo validado pode ser postado
4. Atualizar pagina com novo comentário

## Onde está no código

- `app/actions.tsx`

## Exemplo
```tsx
import TextArea from "../ui/TextArea";
import Button from "../ui/Button";
import Avatar from "../ui/Avatar";
import { tailwindData } from "@/app/constants/tailwindData";
import { useState } from "react";
import { addComment } from "@/app/actions";

import type { Post as PostType } from "@/app/types/Post";
import type { User as UserType } from "@/app/types/User";
import Popup from "../ui/Popup";

interface NewCommentProps {
  post: PostType;
  user: UserType | null;
}
export default function NewComment({ post, user }: NewCommentProps) {
  const [content, setContent] = useState(""); // state para o comentário
  const [popups, setPopups] = useState<{
    message: string;
    type: "error" | "success";
  } | null>(null); // state para renderizar o popup

  const handleAddComment = async () => {
    if (!user) {
      return null;
    } // se não tiver logado não rode
    if (content.trim().length < 5) {
      setPopups({
        message: "O comentário não pode estar vazio.",
        type: "error",
      });
      return null; // se não tiver mais de 5 caracteres apos ser limpo os espaços, bloqueie
    }
    await addComment(post.id, content); // se passar na verificao vá para action, passando qual post e o conteudo
    setPopups({
      message: "Comentário adicionado",
      type: "success",
    }); // mesagem de sucesso
    setContent(""); // limpando o state
  };
  return (
    <>
      {popups && <Popup message={popups.message} type={popups.type} />}
      <div className="flex items-center mt-1 gap-2">
        <Avatar
          src={user?.image || "/avatar.png"}
          size={44}
          alt="Sua imagem de perfi"
        />
        <TextArea
          rows={1}
          placeholder="// escreva um comentário"
          value={content}
          onChange={(e) => setContent(e.target.value)} // guarando o conteudo do textarea
        />
        <Button
          type="submit"
          className={
            content.length >= 5
              ? tailwindData.saveButton
              : tailwindData.disabledButton
          }
          onClick={handleAddComment}
        >
          {"Comentar"}
        </Button>
      </div>
    </>
  );
}
// ui
```

```tsx
export default function async function addComent(postId: string, content: string) {
const logged = getUserCurrent();
if(!logged) {
	throw new error("Não está logado");
}
const id = logged?.user.id
if(content.trim().length < 5) {
throw new error("A descrição tem que ser maior que 5 caraectes");
} // Validação no backend também
await prisma.comment.create({
data: {
	postId,
	content,
	userId: id
}
}); // criando comentário na tabela de comentarios no post, e passando conteudo e usuario.
revalidatePath("/") // atulizando o cache da home
}
```

## Checklist de revisão

- [ ] Sei explicar sem olhar o código
- [ ] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Schemas]] [[Verificar se esta logado hook]] [[FeedBack de Formulário + Válidação]]