---
tags: [curso, nextjs, vercel, app-router, configuracao]
tipo: curso
fonte: "Vercel"
---

# Alias — Caminhos

Usado para evitar caminhos longos e confuso.

````
```
import '@/app/ui/global.css';
`````
Neste exemplo o @ aponta para uma pasta /src

## Podemos criar um para apontar para uma pasta de imagem.

```
no arquivo tsconfig.json ou jsconfig.json
{
  "compilerOptions": {
    "baseUrl": ".",
    "paths": {
      "@img/*": ["./images/*"]
    }
  }
}
````

Usaríamos assim 
````
@img/1.png
````


