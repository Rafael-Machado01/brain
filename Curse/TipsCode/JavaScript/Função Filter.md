---
tags: [curso, javascript, tipscode, array]
tipo: curso
fonte: "TipsCode"
---

# Função Filter

Filtrar os dados com alguma condição

```
const shop = [

{name: "Iphone", "price": 5984, fragile: true},

{"name": "Motorola", "price": 984, fragile: false},

{"name": "Samsung", "price": 3984, fragile: true},

{"name": "Xiaomi", "price": 1984,fragile: false}

];

console.log(shop.filter(function(p) {

return p.price > 2500

}))
````

![[Pasted image 20250826050746.png]]

# Encadeamento com filter

```
const caro = function(p) {

return p.price > 5000

}

const fragile = function(p) {

return p.fragile == true;

}

console.log(shop.filter(caro))

console.log(shop.filter(fragile))
````
