"use server"
import {notFound} from "next/navigation";
import {findTodoById} from "@/app/actions";
export default async function viewPage({params}) {

    const { id } = await params;

    const todo = await findTodoById(id)
    if(!todo) return notFound();
    
    return(
            <div>
                <h1>{todo.titulo}</h1>
                <p>{todo.descricao}</p>
            </div>

    )
}