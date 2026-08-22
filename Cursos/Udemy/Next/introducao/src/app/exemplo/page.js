"use client"
import {useSearchParams} from "next/navigation";

export default function ExemploPage() {
    const searchParams = useSearchParams();

    const valueParam = searchParams.get("value");

    const verify = searchParams.has("value")
    console.log(valueParam);
    return(
        <>
        <h1>pagina de exemplo</h1>
            <p>Exibindo resultados para {valueParam}</p>
            {verify ?  "tem" : "Nao Tem parametro"}
        </>
    )
}