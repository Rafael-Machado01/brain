import Title from "./title";
import Item from "./item";
import { FaTrash, FaEdit } from "react-icons/fa";
import axios from "axios";
import {toast} from 'react-toastify'

export default function Table({ products,setProducts, setOnEdit }) {

   const handleDelete = async (id) => {
      await axios.delete(`http://localhost:4000/` + id)
      .then(({data}) => {
         const newArray = products.filter((product) => product.id !== id)
         
         setProducts(newArray)
         toast.success(data)

   })
   .catch(({data}) => toast.error(data))
}

   const handleEdit = (item) => {
      setOnEdit(item)
   }
  return (
    <main className="flex flex-col bg-gray-50 mt-12 mr-12 ml-12 rounded-se-2xl p-4">
      {/* Cabeçalho */}
      <div className="grid grid-cols-3 text-center p-2">
        <Title title="Nome" />
        <Title title="Preço" />
        <Title title="Estoque" />
      </div>

      {/* Itens */}
      {products.map((item, i) => {
        return (
          <div key={i}>
            <Item name={item.nome} price={item.preco} storage={item.estoque} />
            <div className="flex justify-center">
              <FaTrash
                className="text-red-600 m-2 hover:cursor-grab"
                size={20}

                onClick={() => handleDelete(item.id)}
              />
              <FaEdit
                className="text-blue-600 m-2 hover:cursor-grab"
                size={20}
                onClick={() => handleEdit(item)}
              />
            </div>
          </div>
        );
      })}
    </main>
  );
}
