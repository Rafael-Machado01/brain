---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: ImagePreview.tsx
nivel: intermediario
dominado: false
data: 2026-08-18
tipo: feature
---

# ImagePreviewComponent

## O que essa feature faz

Recebe um input de file e mostra a imagem que foi selecionada (preview local, antes de subir pro servidor).

## Passo a passo da lógica

1. Define um state para a imagem (`string | null`)
2. Captura o input que recebe a imagem (`onChange`)
3. Usa FileReader para converter o arquivo em URL (base64)
4. Usa condição ternária / `&&` para renderizar a imagem só se existir

## Técnica / conceito por trás

`FileReader.readAsDataURL()` transforma o arquivo binário numa string base64 que o `<img>`/`<Image>` consegue exibir direto — sem precisar de backend. Quando o reader termina, dispara `onloadend`, e aí salvamos o resultado no state.

## Onde está no código

- `app/components/ui/ImagePreview.tsx`

## Exemplo

```tsx
const [image, setImage] = useState<string | null>(null);

const changeImage = (e: React.ChangeEvent<HTMLInputElement>) => {
  const file = e.target.files?.[0]; // Seleciona a primeira imagem do input

  if (file) {
    const reader = new FileReader();

    reader.onloadend = () => {
      setImage(reader.result as string);
    };
    reader.readAsDataURL(file);
  }
};

return (
  <>
    <input type="file" name="image" onChange={changeImage} accept="image/*" />
    {image && <Image src={image} alt="preview" width={200} height={200} />}
  </>
);
```

## Checklist de revisão

- [ ] Sei explicar sem olhar o código
- [ ] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Renderização ternária]] [[Componente Reutilizável]]
