---
tags: [curso, nextjs, vercel, componentes]
tipo: curso
fonte: "Vercel"
---

# Componente Reutilizável — GlassCard

# Olha que exemplo de componente bom e reutilizável.

```
import { ReactNode } from "react";

import {motion} from 'motion/react';

interface GlassCardProps {
children: ReactNode;
className?: string,
hover?:boolean;
}

export function GlassCard({children, className="",hover = false}: GlassCardProps) {
return (
<motion.div
initial={{opacity:0, y:20}} animate={{opacity:1,y:0}} transition={{duration:0.5}}
whileHover={hover ? {scale:1.01,borderColor: 'rgba(255,255,255,0.12)'}: {}}
className={`backdrop-blur-xl bg-white/3 rounded-3xl shadow-2xl transition-all ${className} `}>
{children}
</motion.div>
)}

````

Aqui podemos colocar css personalizado a cada chamada do componente.
Podemos ter hover ou não.
Usamos o children para contéudos.

