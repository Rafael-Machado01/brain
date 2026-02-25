db.createCollection("PRODUTO");
db.createCollection("TIPO");
db.createCollection("FABRICANTE");

db.TIPO.insertMany([
    {id:1, descricao:"Bebida"},
    {id:2, descricao: "Alimento"},
    {id:3, descricao: "Higiene"},
    {id:4, descricao: "Limpeza"}
    ]);
    
db.FABRICANTE.insertMany([
    {id:11, nome: "Colgate"},
    {id:22, nome: "Ype"},
    {id:33, nome: "Tio João"},
   {id:44, nome: "Coca-Cola"},
    {id:55, nome: "Rexona"}
    ]);
    
db.PRODUTO.insertMany([
    {id:1,descricao: "Arroz Tio João",qtde:15,preco:11.90,idfabricante:33,idtipo:2},
    {id:2,descricao: "Detergente",qtde:20,preco:1.99,idfabricante:22,idtipo:4},
    {id:3,descricao: "Creme Dental Colgate",qtde:18,preco:3.99,idfabricante:11,idtipo:3},
    {id:4,descricao:"Coca-Cola 2L",qtde:10,preco:6.99,idfabricante:44,idtipo:1},
    {id:5,descricao: "Feijão Tio João",qtde:15,preco:4.99,idfabricante:33,idtipo:2},
    {id:6,descricao: "Fanta Guaraná",qtde:20,preco:3.99,idfabricante:44,idtipo:1},
    {id:7,descricao: "Sabonete",qtde:15,preco:1.79,idfabricante:55,idtipo:3}
    ]);

db.PRODUTO.updateOne({id: "1"},{$set:{preco: 15.59}});

db.PRODUTO.updateMany({idtipo:1},{$set:{preco: {$inc: 1.15}}});

db.PRODUTO.updateMany(
{idtipo: {$in:[1,2]}}, 
{$mul: {preco: 1.0355}}
);

db.PRODUTO.find({},{descricao:1,preco:1,id:1});


    
    