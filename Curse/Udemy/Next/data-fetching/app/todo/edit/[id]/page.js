import {findTodoById} from "@/app/actions";
import {notFound} from "next/navigation";

export default async function pageEdit({params}) {
    const { id } = await params;
    const todo = await findTodoById(id);
    if(!todo) return notFound();
    return(
        <main>
            <h1>Editando: {todo.titulo}</h1>
        </main>
    )
}