Para criar um banco de dados:

```
use nome-do-banco
```
_Podemos usar o show dbs para mostrar os bancos disponíveis._

Criar e inserir:

```
db.user.insertOne({name:"Rafa",age:18});
db.products.insertOne({_id:1,name:"Chaves",price:2.90,stock:20})
db.products.insertMany([{_id:2,name:"Notebook",price:2.890,stock:20},{_id:3,name:"Teclado",price:300,stock:78}])

```
_Podemos usar show collections para mostrar tabelas._

Para ler dados:
```
db.products.find()
```

Com query:
```
db.products.find({name:"Teclado"})
db.products.find({price: {$gt:8}})

```


Update:

```
db.products.updateOne({_id:2}, {$set: {name:"Computador"}})
```


Relacionamentos:

```db.products.insertOne({
_id:3,
name:"Drone",
price:2900,
stock:25,
reviews: [
{
author: "Alex",
rating:4,
review:"Controle perde o sinal."
},
{
author:"Felipe",
rating:2,
review:"Muito caro!"
}
]
})
```

