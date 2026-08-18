---
tags: [exercicio, javascript, tipscode, array]
tipo: exercicio
fonte: "TipsCode"
---

# Exercício GPT Map

```js
const produtos = [
  { nome: "Camiseta", preco: 50 },
  { nome: "Calça", preco: 120 },
  { nome: "Tênis", preco: 200 },
  { nome: "Boné", preco: 40 }
];

```

Usando [[Função Map]] crie um novo array com nome e desconto do produto.

```
const newArray = produtos.map(function(p){
return {
nome: p.nome,
preco: p.preco *0.90
}
});
console.log(newArray)
````

