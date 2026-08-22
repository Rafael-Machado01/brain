import Link from "next/link";

export default function PostsPage() {
    const postsId = [1,2,3]
    return (
        <>
        <h1>Posts</h1>
            <ul>
                {postsId.map(id => (
                    <li key={id}> <Link href={`/posts/${id}`}>Ver post {id} </Link> </li>

                ))}
            </ul>
        </>
    )
}