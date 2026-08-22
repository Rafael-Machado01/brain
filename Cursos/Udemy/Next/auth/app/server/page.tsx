"use server"
import {auth} from 'auth'
export default async function ServerPage() {
    const session = await auth()
    if(!session || !session.user) {
     return(<h1>Não está logado</h1>)
    }
    return(
        <h1>Server Page</h1>
    )
}