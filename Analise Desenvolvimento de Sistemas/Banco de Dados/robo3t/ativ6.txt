// Criação especificando fields.
db.createCollection("CLUsuario", {
    validator: {
        $jsonSchema: {
            bsonType: "object",
            required: ["id","nome","cadastro"], // Nomes dos Fields.
            properties: {
                id:{bsonType: "int", description:"Deve ser um número inteiro"},
                nome:{bsonType:"string",description:"Deve ser uma string."},
                cadastro:{bsonType: "date",description:"Deve ser uma data."}
            }
        }
    }
});

// Definindo chave primária sendo o field ID.
db.CLUsuario.createIndex({id:1},{unique:true});

db.createCollection("CLServico", {
    validator: {
        $jsonSchema: {
            bsonType: "object",
            required: ["id","descricao","valor_hora"],
            properties: {
                id: {bsonType:"int",description:"Deve ser um número inteiro."},
                descricao:{bsonType:"string",description: "Deve ser uma string."},
                valor_hora:{bsonType:"decimal128",description: "Deve ser um número real."}
            }
        }
    }
});
db.CLServico.createIndex({id:1},{unique:true});

db.createCollection("CLRequisicao", {
    validator:{
        $jsonSchema: {
            bsonType: "object",
            required:["id","id_usuario","id_servico","data","qtde_horas","total","status"],
            properties:{
                id: {bsonType:"int",description:"Deve ser um número inteiro."},
                id_usuario: {bsonType:"int",description: "Deve ser um número inteiro."},
                id_servico: {bsonType:"int",description:"Deve ser um número inteiro."},
                data: {bsonType:"date",description:"Deve ser uma data válida."},
                qtde_horas:{bsonType:"decimal128", description:"Deve ser um número real."},
                total:{bsonType:"decimal128",description:"Deve ser número real."},
                status:{bsonType:"bool",description:"Deve ser um tipo booleano válido."}
            }
        }
    }
});
db.CLRequisicao.createIndex({id:1},{unique:true});
// Inserts
db.CLUsuario.insertMany([
{id:NumberInt(1),nome:"Homem Aranha",cadastro:new Date("1995-10-01")},
{id:NumberInt(2),nome:"Superman",cadastro:new Date("2001-08-14")},
{id:NumberInt(3),nome:"Capitão América",cadastro:new Date("1998-08-11")}
]);

db.CLServico.insertMany([
{id:NumberInt(1),descricao:"Ecanamento",valor_hora:85.00},
{id:NumberInt(2),descricao:"Elétrica",valor_hora:115.00},
{id:NumberInt(3),descricao:"Reforma",valor_hora:140.00},
{id:NumberInt(4),descricao:"Jardinagem",valor_hora:85.00}
]);

db.CLRequisicao.insertMany([
{id:NumberInt(1),id_usuario:NumberInt(1),id_servico:NumberInt(1),data:new Date("2026-03-17"), qtde_horas: 2,total:170.00, status:true},
{id:NumberInt(2),id_usuario:NumberInt(1),id_servico:NumberInt(2),data:new Date("2026-03-17"),qtde_horas:1, total:115.00, status: true},
{id:NumberInt(3),id_usuario:NumberInt(1),id_servico:NumberInt(3),data:new Date("2026-03-17"),qtde_horas:4,total:420.00,status: true},
{id:NumberInt(4),id_usuario:NumberInt(1),id_servico:NumberInt(4),data:new Date("2026-03-17"),qtde_horas:3,total:255.00,status:true},

{id:NumberInt(5),id_usuario:NumberInt(2),id_servico:NumberInt(1),data:new Date("2026-03-17"), qtde_horas:1 ,total:85.00, status:true},
{id:NumberInt(6),id_usuario:NumberInt(2),id_servico:NumberInt(2),data:new Date("2026-03-17"),qtde_horas:2, total:230.00, status: true},
{id:NumberInt(7),id_usuario:NumberInt(2),id_servico:NumberInt(3),data:new Date("2026-03-17"),qtde_horas:2,total:210.00,status: true},
{id:NumberInt(8),id_usuario:NumberInt(2),id_servico:NumberInt(4),data:new Date("2026-03-17"),qtde_horas:1,total:85.00,status:true},
]);

// Relaçes.

db.CLRequisicao.aggregate([
    {
        $lookup:{
            from:"CLUsuario", // Tabela 
            localField:"id_usuario", // Linha da tabela Requisicao
            foreignField:"id_usuario" // Linha da tabela Usuario.
            as:"relausuario"
        }
    },
    {$unwind:$"relausuario"},
    {
        $lookup:{
            from:"CLServico",
            localField:"id_servico",
            foreignField:"id_servico",
            as:"relaservico",
        }
    }
    {$unwind:"$relaservico"},
    {
      $project:{nome:"$relausuario.nome",servico:"$relaservico.descricao",data:1,qtde_horas:1,total:1,status:1}
        },
        {$sort:{nome:1,servico:1}}
    ])
    