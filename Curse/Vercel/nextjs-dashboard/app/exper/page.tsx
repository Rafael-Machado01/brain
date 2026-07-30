// Vamos fazer um next link com map
// Isso deve ser feito em um componente header por exemplo vamos tentar sempre usar isso.
import Link from 'next/link'
export default function Page() {
   const links = [
      {content: 'A', src: '/a', id: '1'},
      {content: 'B', src: '/b', id: '2'},
    {content: 'C', src: '/c', id: '3'},
      {content: 'D', src: '/d',id: '4'},
   ]
   return (
      <div>
      <h1>OLá mundo veja meus links</h1>
      {links.map((link) => {
         return (
            <div className='inline'>
            <Link key={link.id} className='bg-black text-white radius p-2 m-5 hover:text-blue-400 duration-300 transition-colors' href={link.src}>{link.content}</Link>
            </div>
         )
      })}
      </div>
   )
}