export default async function PostPage({params}) {
    return(
        <>
            <h1>ID do post: {(await params).id}</h1>
        </>
    )
}