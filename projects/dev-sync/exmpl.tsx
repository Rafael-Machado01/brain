export type FormState = {
  message: string;
  type: "success" | "error";
}; // nossa tipagem de tratamento de erros

export default async function newNote(
  formState: FormState,
  formData: FormData,
): Promise<FormState> {
  // Oque os atributos dizem,
  // Ele vai receber um formState do tipo que tipamos ali encima
  // Ele vai receber um formData que vem do nosso formAction la do ui
  // E promete (promise) que vai retornar um formState
  return { message: "olá mundo!", type: "success" };
}
