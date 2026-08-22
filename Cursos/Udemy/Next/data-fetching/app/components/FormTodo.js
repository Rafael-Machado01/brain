"use client"

import { useActionState } from "react";
import {updateTodo} from "@/app/actions"

export default function FormTodo({todo}) {

    const [formState, action, pending] = useActionState(updateTodo, {
        errors: "",
    });
    return(
        <form action={action}>
            {formState.errors ? (
                <div>{formState.errors}</div>
            ) : ""}
            <input type="hidden" name={"id"} value={todo.id}/>
            <label htmlFor="titulo">Titulo:</label>
            <input defaultValue={todo.titulo} type="text" name="titulo" required placeholder="Digite o titulo da tarefa"/>
            <label htmlFor="descricao">Descrição:</label>
            <textarea defaultValue={todo.descricao} type="text" name="descricao" placeholder="Digite a descrição da tarefa"/>
            <button type={"submit"}>Editar</button>
        </form>
    )
}