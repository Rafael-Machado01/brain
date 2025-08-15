import express from 'express';
import cors from 'cors';

import productRoute from './routes/produtos.js' // Importando a rota de produto por exemplo no nosso index aqui já cai no /

const port = 4000;
console.log(`O serve ta on ná  ${port}` )// Console log para apontar aonde está a porta.
const app = express(); // Co\nstante App vai receber tudo do lib Express.
app.use(express.json()); // Configura para  usar express com Json
app.use(express.urlencoded({extended: true}))
app.use(cors()); // Constante app recebe a lib express e a cors.

app.use('/', productRoute) // Chamando a rota quando ser /

app.listen(port); // Define qual porta a api vai rodar.
