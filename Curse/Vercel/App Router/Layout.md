O arquivo layout é oque é o nome, se criarmos na pasta pai de uma rota igual vimos no [[Roteador]] fazemos que todas as paginas filhos tenha o código que tenha no layout.

![[Pasted image 20250730072006.png]]
````
import SideNav from '@/app/ui/dashboard/sidenav';

export default function Layout({ children }: { children: React.ReactNode }) {

return (

<div className="flex h-screen flex-col md:flex-row md:overflow-hidden">

<div className="w-full flex-none md:w-64">

<SideNav />

</div>

<div className="flex-grow p-6 md:overflow-y-auto md:p-12">{children}</div>

</div>

);

}
````


