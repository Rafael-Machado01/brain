import express from 'express';
import {getProdutos, addProducts} from '../controllers/produtos.js';

const router = express.Router();

router.get('/', getProdutos);

router.post('/', addProducts)

export default router

