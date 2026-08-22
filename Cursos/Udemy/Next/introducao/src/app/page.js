import Link from "next/link";

export default function Home(){
  return (
      <>
      <h1>Hello World</h1>
        <Link href="/sobre">Pagina Sobre</Link>
        <Link href='/posts'>Posts</Link>
          <Link href='/exemplo?value=valor'>Params</Link>
          <Link href='/produtos/categorias/roupas'>Ir para categoria de Roupas</Link>
          <Link href={'/dashboard'}>Painel</Link>
      </>
  )
}