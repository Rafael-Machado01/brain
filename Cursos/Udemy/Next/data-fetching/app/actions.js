"use server"

import {prisma} from "./prisma"
import {redirect} from "next/navigation";
<<<<<<< HEAD
import {revalidatePath} from "next/cache";
=======
>>>>>>> 1a5d4e8b5b1f4d4a942d80a0a2ce5bfc9c08c197

export async function deleteTodo(formData) {
    const id = Number(formData.get("id"))
    await prisma.todo.delete({where: {id}})
<<<<<<< HEAD
    revalidatePath("/")
=======
>>>>>>> 1a5d4e8b5b1f4d4a942d80a0a2ce5bfc9c08c197
    redirect("/");
}

export const handleSubmit = async (formData) => {
    const titulo = formData.get("titulo");
    const descricao = formData.get("descricao");
    const status = "pendente";
    const todo = await prisma.todo.create({
        data: {
            titulo,
            descricao,
            status,
        }
    });
    console.log(todo)
    redirect("/")
}

export async function findTodoById(id) {
    const todo = await prisma.todo.findUnique({
        where: {
            id: Number(id),
        },
    });
    return todo
<<<<<<< HEAD
}

export async function updateTodo(previousState,formData) {
    const id = Number(formData.get("id"))
    const titulo = formData.get("titulo")
    const descricao = formData.get("descricao")

    if(titulo.length < 5) {
        return {
            errors: "O titulo precisa ter mais de 5 digitos."
        }
    }
    if(descricao.length > 255) {
        return {
            errors: "A descrição tem um limite de 255 caracteres."
        }
    }
    await prisma.todo.update({
        where: {id},
        data: {
            titulo,
            descricao
        }
    })
    redirect("/")
}

export default async function changeStatus(formData) {
    const todoId = Number(formData.get("id"));

    const todo = await prisma.todo.findUnique({
        where: {
            id: Number(todoId),
        },
    });

    if(!todo) {
        throw new Error("Todo não existe")
    }

    const newStats = todo.status === "pendente" ? "feito" : "pendente";

    await prisma.todo.update({
        where:{id:todoId},
        data: {status}
    });

    redirect("/");
=======
>>>>>>> 1a5d4e8b5b1f4d4a942d80a0a2ce5bfc9c08c197
}