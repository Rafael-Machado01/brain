O que é `<Image>`Componente é uma extensão do HTML `<img>`tag, e vem com otimização automática de imagem, como:

- Impedir o layout muda automaticamente quando as imagens estão sendo carregadas.
- Redimensionar imagens para evitar o envio de imagens grandes para dispositivos com uma janela de visualização menor.
- Imagens de carregamento preguiçoso por padrão (imagens carregam à medida que entram na janela de visualização).
- Servindo imagens em formatos modernos, como [WebP em Inglês](https://developer.mozilla.org/en-US/docs/Web/Media/Formats/Image_types#webp)

E a [AVIF (em inglês)](https://developer.mozilla.org/en-US/docs/Web/Media/Formats/Image_types#avif_image)Quando o navegador o suporta.

# Como adicionar uma imagem 
No page.tsx

````
import Image from 'next/image';

<Image

src="/hero-desktop.png"

width={1000}

height={760}

className="hidden md:block"
Isso hidden md é para desaparecer em paginas mobiles.


alt="Screenshots of the dashboard project showing desktop version"

/>
````

Agora vamos adicionar outra imagem para o mobile.

````
<Image

src="/hero-mobile.png"

width={560}

height={620}

alt="mobile"

className="block md:hidden"
/>
````

