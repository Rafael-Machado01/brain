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

# Like

## O que essa feature faz
Permite que usuarios dem likes e deslikes em posts.

## Passo a passo da lógica

1. Verificar se já tem o like
2. Se não like
3. Se sim deslike
4. Retornar ao UI o resultado

## Técnica / conceito por trás

## Onde está no código

- `app/actions.tsx`

## Exemplo
```tsx

model Like {
  id        String   @id @default(cuid())
  userId    String
  postId    String
  user      User     @relation(fields: [userId], references: [id], onDelete: Cascade)
  post      Post     @relation(fields: [postId], references: [id], onDelete: Cascade)
  createdAt DateTime @default(now())
}
 // Esquema do prisma
```

```tsx
export async function likePost(postId : string)Promise<FormState> {
  const logged = await getCurrentUser() // Essa função pega o usuario logado e procura no banco e o retorna.
    if(!logged) {
      return { message: "Você precisa estar logado para dar like neste post!", type: "error" }
    }
    const id = logged?.id; // extraindo o id do objeto.

  const trueLike = await prisma.like.findFirst({
    where: {
      postId,
      userId: id
      }
    }) // Procure se há likes no post, se é do usuario

  if(trueLike) {
    await prisma.like.delete({
      where: {
        id: trueLike.id
      }
    }) // Como já tem like delete o like, que seria deslike 
  }else {
    await prisma.like.create({
      data: {
        postId,
        userId: id
      }
    }) // Como não o like, crie o like no post e atrele ao user
  }
revalidatePath("/") // atulizando o cache da home
}

// action no backend
```

```tsx
"use client";
import { likePost } from "@/app/actions";
import LikeButtonIcon from "../svg/LikeButtonIcon";
import LikedButtonIcon from "../svg/LikedButtonIcon";
import { useState } from "react";
import Popup from "../ui/Popup";

interface likeButtonProps {
  postId: string;
  initialLikesCount: number;
  isLiked: boolean;
  currentUserId?: string;
}

export default function LikeButton({
  postId,
  initialLikesCount,
  isLiked,
  currentUserId,
}: likeButtonProps) {
  const [likesCount, setLikeCount] = useState(initialLikesCount);
  const [liked, setLiked] = useState(isLiked);
  const [showPopup, setShowPopup] = useState(false);

  const handleLike = async () => {
    if (!currentUserId) {
      setShowPopup(true);
      return null;
    } // Se não tiver logado barra aqui também alem de ser no backend mais front end tbm
    await likePost(postId); // caso esteja passe o post id e faça a ação

    setLiked(!liked); // esse é no state, para controlar o icone de like
    setLikeCount(liked ? likesCount - 1 : likesCount + 1); // recebe quantos likes o post tinha, e adiciona 1
  };

  return (
    <div className="flex items-center mt-2">
      {showPopup && (
        <Popup
          message="Entre em sua conta para curtir este post."
          type="error"
        />
      )}
      <button onClick={handleLike} className="mx-1.5 cursor-pointer">
        {liked ? (
          <LikedButtonIcon className="text-drac-red size-3.5 hover:text-drac-comment" />
        ) : (
          <LikeButtonIcon className="text-drac-comment size-3.5 hover:text-drac-red" />
        )}
      </button>
      <span className="text-drac-comment text-xs">{likesCount}</span>
    </div>
  );
}

// ui
```
## Checklist de revisão

- [ ] Sei explicar sem olhar o código
- [ ] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Verificar se esta logado hook]] [[Schemas]] [[FeedBack de Formulário + Válidação]]