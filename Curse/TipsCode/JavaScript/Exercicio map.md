Retorne apenas price do JSON shop:
[[Função Map]]


````
const shop = [

'{"name": "Iphone", "price": 5.984}',

'{"name": "Motorola", "price": 984}',

'{"name": "Samsung", "price": 3.984}',

'{"name": "Xiaomi", "price": 1.984}'

]
````

````
const shop = [

'{"name": "Iphone", "price": 5.984}',
'{"name": "Motorola", "price": 984}',
'{"name": "Samsung", "price": 3.984}',
'{"name": "Xiaomi", "price": 1.984}'
]
const forObject = function(json) {
return JSON.parse(json)
}
const price = function(product) {
return product.price
}
const result = shop.map(forObject).map(price)
console.log(result);
````

