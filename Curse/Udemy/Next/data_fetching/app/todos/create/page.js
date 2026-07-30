import {db} from "@/app/db"

export default function CreatePage() {
    const addTodo = async (formData) => {
        "use server"
        console.log(formData)
        const title = formData["title"]
        const description = formData["description"]
        const status = "pendente"
        const newTodo =  await db.todo.create({
            data: {
                title,
                description,
                status,
            }
        });
        console.log(newTodo)
    }

    return(
        <main>
        <h1>Criar nova tarefa</h1>
        <form action={addTodo}>
            <label htmlFor="titulo">Titulo</label>
            <input name="titulo" type="text" placeholder="Insira o titulo"/>
            <label htmlFor="descricao">Descrição</label>
            <input name="descricao" type="text" placeholder="Insira a descricao"/>
            <button type="submit">Criar to-do</button>
        </form>
        </main>
    )
}