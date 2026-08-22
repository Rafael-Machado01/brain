import {db} from '../db.js';

export const getProdutos = (_,res) => {
   const q = 'SELECT * FROM produtos'; // sql padrão
   db.query(q, (err,data)=> {
      if(err){ // Caso de um erro retorne o erro em formato Json
         return res.json(err)
      }
      return res.status(200).json(data) // Senão retornamos o status de erro.
   })
} // O _ e mesmo que (req,res) - Por que nesta função vamos apenas responder

export const addProducts = (req,res) => {
   const q = "INSERT INTO produtos(`nome`,`preco`,`estoque`,`fone`) VALUES(?)";
   const values = [
      req.body.nome,
      req.body.preco,
      req.body.estoque,
      req.body.fone
   ];
   console.log(values)
   console.log(req.body)
   db.query(q,[values], (error) => {
      if(error) return req.json(error);

      return res.status(200).json('Produto cadastrado')
   })
}

export const updateProduto = (req,res) => {
   const q = "UPDATE produtos SET `nome` = ?,`preco`= ?,`estoque`= ?, `fone` = ? WHERE = `id`"
   const values = [
      req.body.nome,
      req.body.preco,
      req.body.estoque,
      req.body.fone
   ];

   db.query(q,[...values, req.params.id], (error) => {
      if(error) return res.json(error)
         return res.status(200).json('Produto Atualizado')
   } )
}

export const deleteProduto = (req, res) => {
  const q = "DELETE FROM produtos WHERE `id` = ?";
  const id = req.params.id; // pegando o parâmetro da URL

  db.query(q, [id], (error) => {
    if (error) return res.status(500).json(error);
    return res.status(200).json('Produto Deletado');
  });
};