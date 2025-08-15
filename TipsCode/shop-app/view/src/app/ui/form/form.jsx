"use client"
import Input from "./input";
import Button from "./button";
import { useEffect, useRef } from "react";
import axios from 'axios'
import { toast } from 'react-toastify';
export default function Form({onEdit,setOnEdit,getProducts}) {

   const ref = useRef();

   useEffect(() => {
      if(onEdit) {
         const product = ref.current
      product.nome.value = onEdit.nome;
      product.preco.value = onEdit.preco;
      product.estoque.value = onEdit.estoque;
      product.fone.value = onEdit.fone;
      }
      
   },[onEdit]);

   const handleSubmit= async (event) => {
      event.preventDefault()
      
      const product = ref.current 

      if(!product.nome.value ||!product.preco.value ||!product.estoque.value ||!product.fone.value ) {
         return toast.warn('Preencha todos os campos');
      }
      if(onEdit) {
         await axios.put(`http://localhost:4000/` + onEdit.id, {
            nome: product.nome.value,
            preco: product.preco.value,
            estoque: product.estoque.value,
            fone: product.fone.value
         })
         .then(({data}) => toast.success(data))
         .catch(({data}) => toast.error(data))
      }
      product.nome.value = ''
      product.preco.value = ''
      product.estoque.value = ''
      product.fone.value = ''

      setOnEdit(null);

      getProducts()
   }


   return(
      <form className=" bg-gray-50 p-6 mt-12  ml-12 flex mr-12  items-center rounded-bl-lg shadow" ref={ref} onSubmit={handleSubmit}>
         <input title="Nome" name="nome" placeholder="Digite o nome"/>
          <input title="Preço" name="preco" placeholder="Digite o preço "/>
           <input title="Estoque" name="estoque" placeholder="Digite o estoque "/>
            <input title="Telefone" name="fone" placeholder="Digite o telefone "/>
      <Button/>
      </form>
   )
}