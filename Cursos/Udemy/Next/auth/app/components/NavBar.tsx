import {auth,signIn,signOut} from 'auth'
import Link from "next/link";

export default async function NavBar() {
    const session = await auth()
    return (
        <div>
            <Link href={"/"}>Home</Link>
            {session && session.user ? (
                <div><p>{session.user.name}</p>
                    <form action={async () => {
                        "use server"
                        await signOut()
                    }}>
                        <button>Sair</button>
                    </form>
                </div>
            ): (
                <form action={async () => {
                    "use server"
                    await signIn()
                }}>
                    <button>Entrar</button>
                </form>
            )}
        </div>

    )
}