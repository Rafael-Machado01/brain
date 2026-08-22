import Link from "next/link";

export default function TodoNotFound() {
    return(
        <div>
            <h1>Todo nao encontrado</h1>
           <Link href={"/"}>Voltar para a home</Link>
        </div>
    )
}