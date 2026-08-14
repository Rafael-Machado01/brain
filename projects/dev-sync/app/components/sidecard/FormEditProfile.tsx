"use client";
import { useFormState } from "react-dom";
import { updateUserProfile } from "@/app/actions";
import Label from "@/app/components/ui/Label";
import Input from "@/app/components/ui/Input";
import Button from "@/app/components/ui/Button";
import ImagePreview from "@/app/components/ui/ImagePreview";
import Avatar from "@/app/components/ui/Avatar";

export default function FormEditProfile() {
  const [formState, formAction] = useFormState(updateUserProfile, {
    message: "",
    type: "success",
  });
  return (
    <>
      <div>{formState.message && <p>{formState.message}</p>}</div>
      <form action={formAction}>
        <Avatar src={user.image} />
        <p> -> </p>
        <ImagePreview />
        <Label text="Nome" htmlFor="name" />
        <Input
          id="name"
          name="name"
          placeholder="Digite o seu nome"
          defaultValue={user.name || ""}
        />
        <Label id="title" text="Cargo" htmlFor="title" />
        <Input
          id="title"
          name="title"
          placeholder="Digite o seu cargo"
          defaultValue={user.title || ""}
        />
        <Label id="location" text="Localização" htmlFor="location" />
        <Input
          id="location"
          name="location"
          placeholder="Digite a sua localização"
          defaultValue={user.location || ""}
        />
        <Label id="bio" text="Bio" htmlFor="bio" />
        <Input
          id="bio"
          name="bio"
          placeholder="Digite a sua bio"
          defaultValue={user.bio || ""}
        />
        <Button type="submit">Salvar</Button>
      </form>
    </>
  );
}
