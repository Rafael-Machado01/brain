import type {NextAuthConfig} from 'next-auth';
import NextAuth from 'next-auth';

const config = {
    providers: [google,github]
}satisfies NextAuthConfig;
export const {handlres,auth,signIn,singOut} = NextAuth(config);