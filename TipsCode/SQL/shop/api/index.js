import express from 'express';
import cors from 'cors';
import produtosRoute from './routes/produtos.js'

const app = express();
const port = 3000;

app.use(express.json());
app.use(cors());

app.listen(port, () => {
   console.log('gotcha!');
});

app.use('/', produtosRoute) // Quando / for acessado execute a função


