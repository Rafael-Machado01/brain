import {findTodoById} from "@/app/actions";
import {notFound} from "next/navigation";
import FormTodo from "@/app/components/FormTodo"
export default async function pageEdit({params}) {
    const { id } = await params;
    const todo = await findTodoById(id);
    if(!todo) return notFound();
    return(
        <main>
            <h1>Editando: {todo.titulo}</h1>
            <FormTodo todo={todo}/>
        </main>
    )
}