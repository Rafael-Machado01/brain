'use client'
import Form from '@/app/ui/form/form'
import Table from './ui/table/table'
import { useEffect, useState } from 'react'
import axios  from 'axios'
export default function Page() {
   const [products,setProducts] = useState([]);
   const [onEdit,setOnEdit] = useState(null);
   const getProducts = async () => {
      try{
         const res = await axios.get('http://localhost:4000/'); // Usando a função do axios get para pegar os dados no localhost
         setProducts(res.data) // Setando na variável products o dado da res que é a resposta
      }catch (error) {
         console.log(error)   
      }
     
   }
    useEffect(()=> {
      getProducts()// Quando a pagina é carregada ele chama a função automaticamente
      }, [setProducts])
   return(
      <>
   <Form onEdit={onEdit} setOnEdit={setOnEdit} setProducts={setProducts}/>
  <Table products={products} setOnEdit={setOnEdit} setProducts={setProducts}/>
      </>
   
   )}