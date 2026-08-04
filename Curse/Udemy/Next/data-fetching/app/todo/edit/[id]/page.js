import {findTodoById} from "@/app/actions";
import {notFound} from "next/navigation";
<<<<<<< HEAD
import FormTodo from "@/app/components/FormTodo"
=======

>>>>>>> 1a5d4e8b5b1f4d4a942d80a0a2ce5bfc9c08c197
export default async function pageEdit({params}) {
    const { id } = await params;
    const todo = await findTodoById(id);
    if(!todo) return notFound();
    return(
        <main>
            <h1>Editando: {todo.titulo}</h1>
<<<<<<< HEAD
            <FormTodo todo={todo}/>
=======
>>>>>>> 1a5d4e8b5b1f4d4a942d80a0a2ce5bfc9c08c197
        </main>
    )
}