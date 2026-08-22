---
tags: [curso, nextjs, vercel, app-router]
tipo: curso
fonte: "Vercel"
---

# Link — Navegação

É muito mais organizado exemplo :

````
import Link from 'next/link'

const links = [

{ name: 'Home', href: '/dashboard', icon: HomeIcon },

{

name: 'Invoices',

href: '/dashboard/invoices',

icon: DocumentDuplicateIcon,

},

{ name: 'Customers', href: '/dashboard/customers', icon: UserGroupIcon },

];
<Link

key={link.name}

href={link.href}

className="flex h-[48px] grow items-center justify-center gap-2 rounded-md bg-gray-50 p-3 text-sm font-medium hover:bg-sky-100 hover:text-blue-600 md:flex-none md:justify-start md:p-2 md:px-3"

>
````

# Para deixar os links ativos automático

Primeiro importe a biblioteca 
```
import { usePathname } from 'next/navigation';
import clsx from 'clsx';

```



Agora atribua uma variável

```
export default function NavLinks() {
  const pathname = usePathname();
  // ...
}
````
Logica com clsx

```
 className={clsx(
              'flex h-[48px] grow items-center justify-center gap-2 rounded-md bg-gray-50 p-3 text-sm font-medium hover:bg-sky-100 hover:text-blue-600 md:flex-none md:justify-start md:p-2 md:px-3',
              {
                'bg-sky-100 text-blue-600': pathname === link.href,
              },
            )}
```




