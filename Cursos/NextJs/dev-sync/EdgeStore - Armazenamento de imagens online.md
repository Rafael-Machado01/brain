---
tags: [projeto, feature]
projeto: ""
arquivo: ""
nivel: simples
dominado: false
data: "2026-08-18"
tipo: feature
---

# EdgeStore - Armazenamento de imagens online

## O que essa feature faz

## Passo a passo da lógica

1. Instalação
2. Api key no .env


```tsx
npm install @edgestore/server @edgestore/react zod

EDGE_STORE_ACCESS_KEY=your-access-key
EDGE_STORE_SECRET_KEY=your-secret-key // no .env

rota em /app/api/edgestore/[...edgestore]/route.ts
veja como proteger a rota
// config backend
```

```tsx
// lib/edgestore.ts
"use client";

import { createEdgeStoreProvider } from "@edgestore/react";
import { type EdgeStoreRouter } from "@/app/api/edgestore/[...edgestore]/route";

const { EdgeStoreProvider, useEdgeStore } =
  createEdgeStoreProvider<EdgeStoreRouter>();

export { EdgeStoreProvider, useEdgeStore };
 // Isso cria o provider do edgestore que vamos colocar no layout
 
 // layout.tsx
 import "./globals.css";
import { EdgeStoreProvider } from "@/app/lib/edgestore";
export default function RootLayout({ children }: LayoutProps<"/">) {
  return (
    <html lang="pt-BR">
      <body className={"bg-drac-darker"}>
        <EdgeStoreProvider>{children}</EdgeStoreProvider>
      </body>
    </html>
  );
}
```

````tsx
// como funciona os inputs
"use client"
import {useState} from "react"
const [file,setFile] = useState<File>();
<input type="file" onChange={(e) => {
setFile(e);

<button onClick={() => {
if(file) {
	const res = await edgestore.publicFiles.upload({file})
}
})/>
}}>
````

## Protejendo minha rota

```
import { initEdgeStore } from "@edgestore/server";
import {
  type CreateContextOptions,
  createEdgeStoreNextHandler,
} from "@edgestore/server/adapters/next/app";
import { auth } from "@/auth";

type Context = {
  userId: string | null;
};

async function createContext({ req }: CreateContextOptions): Promise<Context> {
  const session = await auth(); // sua sessão já existente
  return { userId: session?.user?.id ?? null };
}

const es = initEdgeStore.context<Context>().create();

const edgeStoreRouter = es.router({
  publicFiles: es
    .fileBucket()
    // 🔒 bloqueia upload anônimo (o buraco de segurança do review)
    .beforeUpload(({ ctx }) => {
      return ctx.userId !== null;
    })
    // organiza por autor: /publicFiles/{userId}/...
    .path(({ ctx }) => [{ author: ctx.userId! }])
    // necessário se quiser deletar arquivos pelo client
    // (útil pro problema dos arquivos órfãos: troca de avatar/capa)
    .beforeDelete(({ ctx, fileInfo }) => {
      return fileInfo.path.includes(ctx.userId!); // só apaga o que é dele
    }),
});

const handler = createEdgeStoreNextHandler({
  router: edgeStoreRouter,
  createContext,
});

export { handler as GET, handler as POST };

export type EdgeStoreRouter = typeof edgeStoreRouter;
```

## Checklist de revisão

- [ ] Sei explicar sem olhar o código
- [ ] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Criar post]] [[Editar Perfil]]