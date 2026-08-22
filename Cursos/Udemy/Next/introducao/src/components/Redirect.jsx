"use client"
import {useRouter} from 'next/navigation'

export default function Redirect() {
    const router = useRouter()

    function sendEmailAndRedirect() {
        router.push("/")
    }
    return (
        <button onClick={sendEmailAndRedirect}>home</button>
    )
}