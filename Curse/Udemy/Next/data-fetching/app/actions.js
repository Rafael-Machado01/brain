"use server"

import {prisma} from "./prisma"
import {redirect} from "next/navigation";

export async function deleteTodo(formData) {
    const id = Number(formData.get("id"))
    await prisma.todo.delete({where: {id}})
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
}