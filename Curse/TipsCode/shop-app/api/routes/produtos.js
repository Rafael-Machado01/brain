import express from 'express';
import {getProdutos, addProducts, updateProduto , deleteProduto} from '../controllers/produto.js';

const router = express.Router();

router.get('/', getProdutos) // Quando ele acessar o / quero que ele chame a função getProdutos

router.post('/', addProducts)

router.put('/:id', updateProduto)

router.delete('/:id',deleteProduto) 
export default router