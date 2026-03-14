// Crie a tabela associado insira etc... Definindo a chave primaria o field código.
db.createCollection("associado");
db.associado.createIndex({"codigo":1}, {unique: true});
db.associado.insertMany([
    {codigo:"10", nome:"Beltrano", nascimento:"15/03/1978", renda:"4500"},
    {codigo:"20", nome:"Zé Buscapé", nascimento:"10/03/1960", renda:"3500"}
]);

// Associado acresente o field sexo.
db.associado.updateMany({},{$set:{sexo: "M"}});

// Insira os documentos na coleção associado.
db.associado.insertMany([
    {codigo: "30", nome:"Ciclano", nascimento:"01/10/1980", renda:"4500", sexo:"M"},
    {codigo: "40", nome:"Fulana", nascimento:"14/08/2000", renda:"8500", sexo:"F"},
    {codigo: "50", nome:"Zé Carioca", nascimento:"11/08/1977", renda:"11500", sexo:"M"},
    {codigo: "41", nome:"Zé Colmeia", nascimento:"13/07/1970", renda:"13500", sexo:"M"}
]);
    
// Exclua o documento 30.
db.associado.deleteOne({codigo:30});

// Updats
db.associado.updateMany(
    {renda:{$lt: 4500}},
    {$set: {renda: 5500}}
);
    
db.associado.updateMany(
    {$and:[ {renda:{$gt: 5500}}, {renda:{$lte:10000}}]},
    {$set: {renda:6999}}
    );
db.associado.updateMany(
    {renda:{$gt: 10000}},
    {$mul:{renda:1.10}}
    );