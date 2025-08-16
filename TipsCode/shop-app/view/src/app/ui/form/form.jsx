"use client"
import { useEffect, useRef } from "react";
import { toast } from "react-toastify";
import axios from "axios";

export default function Form({ onEdit, setOnEdit, getProducts }) {
  const ref = useRef();

  useEffect(() => {
    if (onEdit && ref.current) {
      const product = ref.current;
      product.nome.value = onEdit.nome || "";
      product.preco.value = onEdit.preco || "";
      product.estoque.value = onEdit.estoque || "";
      product.fone.value = onEdit.fone || "";
    }
  }, [onEdit]);

  const handleSubmit = async (event) => {
    event.preventDefault();
    const product = ref.current;

    // Validação dos campos
    if (!product.nome.value || !product.preco.value || !product.estoque.value || !product.fone.value) {
      return toast.warn('Preencha todos os campos');
    }

    try {
      if (onEdit) {
        // Chamada PUT corrigida
        const { data } = await axios.put(`http://localhost:3000/${onEdit.id}`, {
          nome: product.nome.value,
          preco: product.preco.value,
          estoque: product.estoque.value,
          fone: product.fone.value
        });
        toast.success(data);
      } else {
         await axios.post('http://localhost:3000', {
             nome: product.nome.value,
          preco: product.preco.value,
          estoque: product.estoque.value,
          fone: product.fone.value
         })
      }

      // Reset do formulário
      product.nome.value = '';
      product.preco.value = '';
      product.estoque.value = '';
      product.fone.value = '';

      setOnEdit(null);
      getProducts();

    } catch (error) {
      toast.error(error.response?.data || "Erro ao salvar os dados");
    }
  };

  return (
    <form 
      ref={ref}
      onSubmit={handleSubmit}
      className="bg-gray-50 p-6 mt-12 ml-12 flex mr-12 items-center rounded-bl-lg shadow"
    >
      <input name="nome" placeholder="Digite o nome" />
      <input name="preco" placeholder="Digite o preço" />
      <input name="estoque" placeholder="Digite o estoque" />
      <input name="fone" placeholder="Digite o telefone" />
      <button type="submit" className="bg-blue-500 text-white px-4 py-2 rounded hover:bg-blue-600">
        Salvar
      </button>
    </form>
  );
}