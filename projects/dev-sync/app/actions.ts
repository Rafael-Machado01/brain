"use server";

import { prisma } from "@/app/lib/prisma";
import { User } from "@prisma/client";
import { signIn, signOut } from "auth";

type FormState = {
  message: string;
  type: "success" | "error";
};
import path from "path";

export async function getUserByEmail(
  email: string | null,
): Promise<User | null> {
  if (!email) {
    return null;
  }
  const user = await prisma.user.findUnique({
    where: { email: email },
  });
  return user;
}

export async function signInWithProvider(
  provider: "google" | "github",
  _formData: FormData,
): Promise<void> {
  await signIn(provider);
}

export async function logout() {
  await signOut();
}

export async function updateUserProfile(
  formState: FormState,
  formData: FormData,
): Promise<FormState> {
  return { message: "Perfil Atualizado com sucesso.", type: "success" };
}
