import Link from "next/link";
import Button from "./components/Button"
import {prisma} from "./prisma"
import {deleteTodo} from "./actions"
// export const revalidate = 20;
// export const dynamic = 'force-dynamic'
export default async function Page() {

  const todos = await prisma.todo.findMany();
    return(
      <main>
        <Link href={"./todo/new"}>Criar nova tarefa</Link>
          <h1>Tarefas:</h1>
          {todos.map((todo) => (
           <div key={todo.id}>
               <h2>{todo.titulo}</h2>
               <p>{todo.descricao}</p>
             <form action="">
               <input type="hidden" value={todo.id}/>

             </form>
               <div>
                   <Link href={`/todo/view/${todo.id}`}>Visualizar</Link>
                   <Link href={`/todo/edit/${todo.id}`}>Editar</Link>
                 <form action={deleteTodo}>
                   <input type="hidden" name="id" value={todo.id}/>
                   <Button />
                 </form>  

               </div>
           </div>
          ))}
      </main>
  )
}