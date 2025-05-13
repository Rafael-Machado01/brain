import {db} from '../db.js';

export const getProdutos = (_,res) => {
   const q = 'SELECT * FROM PRODUTOS ' // Usando SQL
   db.query(q, (err,data) => {
      if(err) {
         return res.json(err) // Se houve um erro retorne o erro em JSON.
      }
      return res.status(200).json(data) // Caso não me mostre o dados 
   })
}

export const addProducts = (req,res) => {
   const q = "INSERT INTO PRODUCTS(`NOME`,`PRECO`,`ESTOQUE`) VALUES(?)";
   const values = [
     req.body.NOME,
     req.body.PRECO,
     req.body.ESTOQUE
   ]
   db.query(q,[values],(error) => {
      if(error) return res.json(error);

      return res.status(200).json('gotcha!')
   })
}