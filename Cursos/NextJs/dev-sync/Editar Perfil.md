---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: actions.ts formEdit.tsx
nivel: complicado
dominado: false
data: 2026-08-22
tipo: feature
---

# Editar Perfil

## O que essa feature faz
Ela permite que os usuários editem as informações de perfil no nosso projeto.

## Passo a passo da lógica

1. Receber dados do formulário 
2. Comparar com os original 
3. Verificar mudanças
4. Mandar para o prisma

## Técnica / conceito por trás
Vamos receber ele por form de um formState, e criar um objeto que recebe nossos dados atuais, comparar quais houves mudanças e atualizar.

## Onde está no código

- `app/actions.ts`

```tsx
"use client";

import { useActionState, useState } from "react";
import { updateUserProfile } from "@/app/actions";
import Label from "@/app/components/ui/Label";
import Input from "@/app/components/ui/Input";
import Button from "@/app/components/ui/Button";
import { tailwindData } from "@/app/constants/tailwindData";
import Avatar from "@/app/components/ui/Avatar";
import Image from "next/image";
import { User } from "@/app/types/User";
import type { FormState } from "@/app/actions";
import Popup from "@/app/components/ui/Popup";
import { useEdgeStore } from "@/app/lib/edgestore";

export default function FormEditProfile({ user }: { user: User }) {
  const [formState, formAction] = useActionState(updateUserProfile, {
    message: "",
    type: "success",
  } as FormState);

  const [newBackground, setNewBackground] = useState<string | null>(null);
  const [newAvatar, setNewAvatar] = useState<string | null>(null);

  const { edgestore } = useEdgeStore();

  const handleBackgroundChange = async (
    e: React.ChangeEvent<HTMLInputElement>,
  ) => {
    const file = e.target.files?.[0];

    if (!file) return;

    const res = await edgestore.publicFiles.upload({
      file,
    });

    setNewBackground(res.url);
  };

  const handleAvatarChange = async (e: React.ChangeEvent<HTMLInputElement>) => {
    const file = e.target.files?.[0];

    if (!file) return;

    const res = await edgestore.publicFiles.upload({
      file,
    });

    setNewAvatar(res.url);
  };

  return (
    <>
      {formState.message && (
        <Popup message={formState.message} type={formState.type} />
      )}

      <form action={formAction}>
        <input type="hidden" name="id" value={user.id} />

        <input type="hidden" name="avatarUrl" value={newAvatar ?? ""} />

        <input type="hidden" name="backgroundUrl" value={newBackground ?? ""} />

        {/* CAPA */}
        <div className="relative h-19">
          <label
            className="absolute inset-0 cursor-pointer"
            htmlFor="background"
          >
            <input
              type="file"
              accept="image/*"
              id="background"
              name="background"
              className="hidden"
              onChange={handleBackgroundChange}
            />

            <Image
              className="object-cover opacity-35"
              src={newBackground ?? user?.background ?? "/bgsetup.jpg"}
              alt={`Foto de capa de ${user?.name}`}
              fill
            />

            <div
              className="absolute inset-0"
              style={{
                background:
                  "linear-gradient(135deg, #a855f733, #ec489911, transparent)",
              }}
            />

            <div
              className="absolute inset-0"
              style={{
                background:
                  "linear-gradient(to bottom, transparent 40%, #18181b)",
              }}
            />

            <span className="absolute inset-0 flex items-center justify-center gap-1.5 bg-black/40 text-sm text-white opacity-0 transition-opacity hover:opacity-100">
              📷 Alterar capa
            </span>
          </label>
        </div>

        {/* AVATAR */}
        <div className="-mt-8 px-5 pb-5">
          <div className="relative h-14 w-14">
            <label className="absolute inset-0 cursor-pointer" htmlFor="image">
              <input
                type="file"
                accept="image/*"
                id="image"
                name="image"
                className="hidden"
                onChange={handleAvatarChange}
              />

              <Avatar
                src={newAvatar ?? user?.image ?? "/avatar.png"}
                alt={`Foto de perfil de ${user?.name}`}
                size={56}
                className="h-[56px] w-[56px]"
              />

              <span className="absolute inset-0 flex items-center justify-center rounded-full bg-black/40 text-xs text-white opacity-0 transition-opacity hover:opacity-100">
                📷
              </span>
            </label>
          </div>
        </div>

        {/* CAMPOS */}
        <div className="m-2 px-2">
          <Label text="Nome" htmlFor="name" />

          <Input
            id="name"
            name="name"
            placeholder="Digite o seu Nome"
            defaultValue={user.name || ""}
          />

          <Label id="title" text="Cargo" htmlFor="title" />

          <Input
            id="title"
            name="title"
            placeholder="ex: Dev Front end"
            defaultValue={user.title || ""}
          />

          <Label id="bio" text="Bio" htmlFor="bio" />

          <Input
            id="bio"
            name="bio"
            placeholder="Fale um pouco sobre você..."
            defaultValue={user.bio || ""}
          />

          <Label id="location" text="Localização" htmlFor="location" />

          <Input
            id="location"
            name="location"
            placeholder="ex: São Paulo, SP"
            defaultValue={user.location || ""}
          />

          <div className={tailwindData.centered}>
            <Button className={`${tailwindData.saveButton} mt-2`} type="submit">
              Salvar
            </Button>
          </div>
        </div>
      </form>
    </>
  );
}


// form ui
```
Usando a logica de [[EdgeStore - Armazenamento de imagens online]]

```tsx

export async function updateUserProfile(
  formState: FormState,
  formData: FormData,
): Promise<FormState> {
  const session = await auth();

  if (!session) {
    return {
      message: "Não autorizado.",
      type: "error",
    };
  } // valida se ta logado

  const dataForm = {
    id: formData.get("id") as string,
    name: formData.get("name") as string,
    backgroundUrl: (formData.get("backgroundUrl") as string) || "",
    imageUrl: (formData.get("imageUrl") as string) || "",
    title: formData.get("title") as string,
    bio: formData.get("bio") as string,
    location: formData.get("location") as string,
  }; // recebe todos os inputs, as url por input hidden

  if (session.user.id !== dataForm.id) {
    return {
      message: "Não autorizado.",
      type: "error",
    };
  }

  if (dataForm.name.length < 4) {
    return {
      message: "O nome deve conter no mínimo 4 caracteres.",
      type: "error",
    };
  }

  if (dataForm.bio.length <= 5) {
    return {
      message: "A bio deve conter no mínimo 5 caracteres.",
      type: "error",
    };
  }

  if (dataForm.location.length <= 4) {
    return {
      message: "A localização deve conter no mínimo 4 caracteres.",
      type: "error",
    };
  } // validações

  const original = await prisma.user.findUnique({
    where: {
      id: dataForm.id,
    },
  }); // pega oque já tem no banco

  if (!original) {
    return {
      message: "Usuário não encontrado.",
      type: "error",
    };
  } // se não tiver algo esta errado todos usuarios tem no banco

  const hasBackground = dataForm.backgroundUrl.length > 0;
  const hasImage = dataForm.imageUrl.length > 0; 
  // verifica se teve upload de url

  const hasChanges =
    dataForm.name !== original.name ||
    dataForm.title !== original.title ||
    dataForm.bio !== original.bio ||
    dataForm.location !== original.location ||
    hasBackground ||
    hasImage;
 // essa hasChanges ve se o dado recebido é diferente que temos no original
 
  if (!hasChanges) {
    return {
      message: "Nenhuma alteração foi realizada.",
      type: "error",
    };
  } // se não tiver bloqueamos para não ter request invalidas

  const dataToUpdate = {
    name: dataForm.name,
    title: dataForm.title,
    bio: dataForm.bio,
    location: dataForm.location,

    ...(hasBackground && {
      background: dataForm.backgroundUrl,
    }),
    ...(hasImage && {
      image: dataForm.imageUrl,
    }),
  }; // se passar colocamos oque deve ser mudado 

  await prisma.user.update({
    where: {
      id: dataForm.id,
    },
    data: dataToUpdate,
  }); // adicionamos no banco
  revalidatePath("/");
  return {
    message: "Perfil atualizado com sucesso.",
    type: "success",
  };
}
```
## Checklist de revisão

- [ ] Sei explicar sem olhar o código
- [ ] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados
[[[Verificar se esta logado hook]]] [[EdgeStore - Armazenamento de imagens online]] [[ImagePreviewComponent]] 