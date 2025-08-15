import "@/styles/globals.css"; // Importando Css
import { WorkSans } from "./ui/fonts";

export default function RootLayout({children}) { // Children : chamando o Page.jsx
   return(
      <html lang="pt-BR">
         <body className={`${WorkSans.className} justify-center bg-gray-950 `}>  {/* Adicionando a fonte em todo nosso body */}
  {children} {/* Renderizando nossa page.tsx */}
         </body>
      </html>
      
)}