O [[NextJS]] otimiza a fonte pois a [Mudança de Layout cumulativa](https://vercel.com/blog/how-core-web-vitals-affect-seo) É uma métrica usada pelo Google para avaliar o desempenho do site.Inicialmente processa texto em uma fonte de fallback ou sistema e, em seguida, troca-a por uma fonte personalizada depois de carregada. Esse swap pode fazer com que o tamanho do texto, o espaçamento ou o layout sejam alterados, mudando os elementos ao seu redor.

![[Pasted image 20250729193209.png]]

# Como importar uma fonte do google.
Criamos um font.ts na pasta ui

````
import {Inter} from 'next/font/google';

export const inter = Inter({subsets: ['latin']})

// este subsets é para carregar um subconjunto
````

No layout adicionamos

````
```
import { inter } from '@/app/ui/fonts';
```
<body className={`${inter.className} antialiased`}>{children}</body>
````

Agora importamos outra fonte e os pesos dela

````
import { Lusitana } from 'next/font/google';
export const lusi = Lusitana({weight: ['400','700']});
````

No app/page.tsx
```
import { lusi } from '@/app/ui/fonts';
<p className={`${lusi.className}`}>teste da fonte</p>
````

![[Pasted image 20250729194824.png]]
