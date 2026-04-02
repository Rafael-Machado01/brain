db.createCollection("CANDIDATO", {
    validator: {
        $jsonSchema: {
            bsonType: "object",
            required:["id","nome","deferido"],
            properties: {
                id: {bsonType: "int", description:"Deve ser um número inteiro."},
                nome:  {bsonType: "string", description: "Deve ser uma string."},
                deferido: {bsonType: "bool", description: "Deve ser um tipo booleano válido."}
            }
        }
    }
});

db.createCollection("AVALIACAO", {
    validator: {
        $jsonSchema: {
            bsonType: "object",
            required:["id_candidato","tipo","nota"],
            properties: {
                id: {bsonType: "int", description:"Deve ser um número inteiro."},
                tipo:  {bsonType: "char", description: "Deve ser um tipo válido.",
                nota: {bsonType: "double", description: "Deve ser um número real."}
            }
        }
    }
}}
);

db.CANDIDATO.insertMany([
{id:NumberInt(1), nome: "Rafael", deferido: true},
{id:NumberInt(2), nome: "Lorena", deferido: true},
{id:NumberInt(3), nome: "Ana Júlia", deferido: false},
{id:NumberInt(4), nome: "Mariana", deferido: true},
{id:NumberInt(5), nome: "Maria", deferido: false},
{id:NumberInt(6), nome: "Ana", deferido: false},
{id:NumberInt(7), nome: "Ana Livia", deferido: true},
{id:NumberInt(8), nome: "Paula", deferido: false},
{id:NumberInt(9), nome: "Debora", deferido: true},
{id:NumberInt(10), nome: "Isadora", deferido: false}
]);

db.AVALIACAO.insertMany([
{id:NumberInt(1),tipo:"D",nota:8.0},
{id:NumberInt(1),tipo:"P",nota:3.0},
{id:NumberInt(2),tipo:"D",nota:2.0},
{id:NumberInt(2),tipo:"P",nota:1.0},
{id:NumberInt(3),tipo:"D",nota:8.0},
{id:NumberInt(3),tipo:"P",nota:10.0},
{id:NumberInt(4),tipo:"D",nota:9.0},
{id:NumberInt(4),tipo:"P",nota:8.0},
{id:NumberInt(5),tipo:"D",nota:7.0},
{id:NumberInt(5),tipo:"P",nota:6.0},
{id:NumberInt(6),tipo:"D",nota:5.0},
{id:NumberInt(6),tipo:"P",nota:4.0},
{id:NumberInt(7),tipo:"D",nota:10.0},
{id:NumberInt(7),tipo:"P",nota:9.0},
{id:NumberInt(8),tipo:"D",nota:8.0},
{id:NumberInt(8),tipo:"P",nota:6.0},
{id:NumberInt(9),tipo:"D",nota:4.0},
{id:NumberInt(9),tipo:"P",nota:3.0},
{id:NumberInt(10),tipo:"D",nota:8.0},
{id:NumberInt(10),tipo:"P",nota:2.0},
]);

db.CANDIDATO.find();

db.AVALIACAO.aggregate([
 { 
     $lookup:{
         from:"CANDIDATO",
         localField:"id",
         foreignField:"id",
         as:"ids"
     }
 },
 {$unwind:"$ids"},
 {
     $project:{nome:"$ids.nome",tipo: 1, nota: 1}
     },
        {$sort: {nome:1,tipo:1}}
        ]);
        

db.AVALIACAO.aggregate([
        {$group: {
     _id: "$id",
     media: {$avg: "$nota"}
     }
 },
 { 
     $lookup:{
         from:"CANDIDATO",
         localField:"_id",
         foreignField:"id",
         as:"ids"
     }
 },
 {$unwind:"$ids"},
 {
     $project:{nome:"$ids.nome", media: 1}
     },
        ]);
        
db.AVALIACAO.updateMany({id:10}, {$set:{nota:7.65}});

db.CANDIDATO.deleteMany({deferido:false});

db.AVALIACAO.aggregate([
 { 
     $lookup:{
         from:"CANDIDATO",
         localField:"id",
         foreignField:"id",
         as:"ids"
     }
 },
 {$unwind:"$ids"},
 {
     $project:{id: 1, nome:"$ids.nome",tipo: 1, nota: 1}
     },
        {$sort: {nota:1,tipo:1}}
        ]);
 
