---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: actions.tsx
nivel: intermediario
dominado: true
data: 2026-08-18
tipo: feature
---

# Criar post

## O que essa feature faz
Permite o usuario criar posts com legendas e foto.
## Passo a passo da lógica

1. Fomulário UI
2. Fazer upload usando [[EdgeStore - Armazenamento de imagens online]]
3. Resgatar dados do formulário do backend
4. Salvar no banco


## Onde está no código

- `app/actions`

## Código
```tsx
"use client";
import { User } from "@/app/types/User";
import { useActionState, useState, useEffect } from "react";
import Card from "@/app/components/ui/Card";
import Popup from "../ui/Popup";
import Avatar from "@/app/components/ui/Avatar";
import TextArea from "@/app/components/ui/TextArea";
import ImagePreview from "../ui/ImagePreview";
import Button from "../ui/Button";
import { tailwindData } from "@/app/constants/tailwindData";
import { FormState, newPost } from "@/app/actions";

interface NewPostProps {
  isAuth: User;
}

export default function NewPost({ isAuth }: NewPostProps) {
  const [imageKey, setImageKey] = useState(0);
  const [canPost, setCanPost] = useState("");

  const initialState: FormState = {
    message: "",
    type: "success",
  }; // Isso cria uma const tipada FormState

  const [formState, formAction] = useActionState(newPost, initialState);
  useEffect(() => {
    if (!formState.message || formState.type !== "success") {
      return;
    }
    setCanPost("");
    setImageKey((prev) => prev + 1);
  }, [formState.message, formState.type]); // validação de mensagems

  const randomHex = () => {
    return crypto.randomUUID().replaceAll("-", "").slice(0, 6).toUpperCase();
  }; // Isso nos retorna um hexadecimal para colocar no nosso id que fica visil na pagina
  const visibleId = randomHex(); // apos isso atrelamos a o valor de input hidden
  return (
    <Card hover={true} className={`p-2`}>
      <div>
        {formState.message && (
          <Popup message={formState.message} type={formState.type} />
        )}
      </div>
      <form className="flex flex-col p-2" action={formAction}>
        <input type="hidden" name="id" id="id" value={isAuth.id} />
        <input
          type="hidden"
          name="visibleId"
          id="visibleId"
          value={visibleId}
        /> // input hidden
        <div className="flex gap-3">
          <Avatar
            size={44}
            src={isAuth.image ?? "/avatar.png"}
            alt={`Foto de perfil de ${isAuth.name}`}
            className="w-[44] h-[44]"
            ring
          />
          <TextArea
            onChange={(e) => setCanPost(e.target.value)}
            minLength={5}
            maxLength={225}
            name="caption"
            rows={5}
            cols={33}
            placeholder="// compartilhe conhecimento com a rede... "
          />
        </div>
        <div className="flex items-end justify-between mt-2">
          <ImagePreview key={imageKey} /> // dentro de image preview há a logica de upload de imagem
          <Button
            className={
              canPost.length >= 5
                ? tailwindData.saveButton
                : tailwindData.disabledButton
            }
          >
            Publicar
          </Button>
        </div>
      </form>
    </Card>
  );
}


// form ui
```

```tsx

export async function newPost(
  formState: FormState,
  formData: FormData,
): Promise<FormState> {
  const session = await auth();
  if (!session) return { message: "Não autorizado.", type: "error" };

  const userId = formData.get("id") as string;
  const visibleId = formData.get("visibleId") as string;
  const caption = formData.get("caption") as string;
  const imageUrl = formData.get("imageUrl") as string; // capturando dados do input hidden

  if (session.user.id !== userId)
    return { message: "Não autorizado.", type: "error" };

  if (!caption || caption.length < 5) {
    return {
      message: "Legenda deve conter no mínimo 5 caracteres.",
      type: "error",
    };
  } // validações

  const newData = {
    userId,
    caption,
    visibleId,
    ...(imageUrl && { imageUrl: imageUrl }),
  }; // se tiver imagem ou se não tiver o restante é obrigatorio
  await prisma.post.create({
    data: newData,
  }); // create
  revalidatePath("/");
  return {
    message: "Publicado com sucesso!",
    type: "success",
  };
}

// action backend 
```

## Checklist de revisão

- [ ] Sei explicar sem olhar o código
- [ ] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[EdgeStore - Armazenamento de imagens online]] [[ImagePreviewComponent]]