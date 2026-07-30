export default function Profile() {
    const user = false
    if (!user) {
        redirect("/","Ola")
    }
    return (
        <>
        <h1>Bem vindo ao seu perfil</h1>
        </>
    )
}