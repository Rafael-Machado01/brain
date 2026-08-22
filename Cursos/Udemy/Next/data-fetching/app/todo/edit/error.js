"use client"
import Link from "next/link"
export default function todoEditError() {
    return (
        <div>
            <h1>Ocorreu um problema interno. Tente novamente mais tarde.</h1>
            <Link href={"/"}>Home</Link>
        </div>
    )
}