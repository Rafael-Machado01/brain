---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: Popup.tsx
nivel: simples
dominado: true
data: 2026-08-18
tipo: feature
---

# FlashMessage Component

## O que essa feature faz
Cria uma messagem temporaria que fluta pela aplicação.

## Passo a passo da lógica

1. Crie o componente
2. Chama e use condição ternária
3. Crie um timer para desaparecer.


## Técnica / conceito por trás
Estado booleano visível + setTimeout dentro do useEffect, com cleanup do timer no return. Quando o tempo acaba, setIsVisible(false) e o early return null remove o componente da tela.

## Onde está no código

- `app/components/ui/Popup.tsx`

## Exemplo

```tsx
interface FlashMessageProps {
message: string;
type: "success" | "error"
}
``
export default function FlashMessage({message,type}: FlashMessageProps) {
const [isVisible, setIsVisible] = useState(true);
  useEffect(() => {
    const timer = setTimeout(() => {
      setIsVisible(false);
    }, 2000);
    return () => clearTimeout(timer);
  });
  if (!isVisible) return null;

return (
  <div
      className={`fixed top-20 right-6 p-4 bg-drac-darker font-bold shadow-2xl rounded-md z-200
        ${type === "success" ? "text-drac-green shadow-glow-purple" : "text-drac-red shadow-glow-red"}`}
    >
      <p>{message}</p>
    </div>
)
}
o componente que chama precisa ter um state para renderizalo
```

## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Component]] [[Components]] [[Renderização ternária]] [[Componente Reutilizável]]