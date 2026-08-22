---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: Modal.tsx
nivel: simples
dominado: true
data: 2026-08-21
tipo: feature
---

# Componente Reutilizável

## O que essa feature faz
Em nossos projetos podemos ter componentes que sempre são chamados, como buttons,inputs,modals. Isso podemos criar um componente para evitar esse código sujo.

## Passo a passo da lógica

1. Define as props que o componente pode receber
2. Use as props no componente

## Técnica / conceito por trás
Função construtora, usando uma base para recriar algo. [[POO]]

## Onde está no código

- `app/components/ui/Modal.tsx`

## Exemplo
```
import type { ButtonHTMLAttributes } from "react";


interface ButtonsProps extends ButtonHTMLAttributes<HTMLButtonElement>{
	children: React.ReactNode;
	className?: string;
	typed: "success" | "error" | "disabled"
} // Em nossa interface conseguimos extender as props de um componente html. Podemos usar os atributos padrões que button tem.

export default function Button({children,className,type}: ButtonsProps) {
 return (
	 <button classname={`${className} {typed == "success" bg-green}`}>{children}</button>
 )
}

chamada no componente pai

import Button from "/components/button"
<Button className="text-lg" type="submit" typed="success"> Olá Mundo </Button>  // Por exemplo aqui não tinhamos definido o tipo type mais ele vem do meu buttonhtmlatributes
```

## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Components]] [[Component]]