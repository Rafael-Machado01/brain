export default async function CamisasPages({params}){
    return (
        <h1>{(await params).camisas}</h1>
    )
}