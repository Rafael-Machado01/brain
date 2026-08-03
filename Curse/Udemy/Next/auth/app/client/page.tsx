"use client"
import {useSession} from "next-auth/react";

export default function PageClient() {
   const {data: session} = useSession();
   if (!session || !session.user) {
       return (<h1>Voce não está logado!</h1>)
   }

    return(
        <div>Page Client</div>
    )
}