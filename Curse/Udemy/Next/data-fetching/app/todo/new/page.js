import {handleSubmit} from "@/app/actions";

export default function newPage() {
    return(
        <main>
            <h1>Adicione uma nova tarefa</h1>
            <form action={handleSubmit}>
                <label htmlFor="titulo">Titulo:</label>
                <input  type="text" name="titulo" required placeholder="Digite o titulo da tarefa"/>
                <label htmlFor="descricao">Descrição:</label>
                <textarea type="text" name="descricao" placeholder="Digite a descrição da tarefa"/>
                <button type={"submit"}>New</button>
            </form>
        </main>
    )
}