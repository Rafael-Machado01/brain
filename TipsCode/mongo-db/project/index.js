const { MongoClient } = require("mongodb");

const uri = "mongodb://127.0.0.1:27017/?directConnection=true&serverSelectionTimeoutMS=2000&appName=mongosh+2.8.2";

const client = new MongoClient(uri);

async function run() {
  try {
    const database = client.db('frutas');
    const frutas = database.collection('frutas');

    const query = { name: 'Banana' };
    const fruta = await frutas.findOne(query);

    const novaFruta = {
      name: "Uva",
      price: 2
    }
    const result = await frutas.insertOne(novaFruta)
    console.log("Cadastrada")
    console.log(fruta);
  } finally {
    await client.close();
  }
}

run().catch(console.dir);