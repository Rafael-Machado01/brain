import {useRef} from 'react';


const Form = () => {
   const ref = useRef();
   return (
      <>
      <form>
         <label for='nome'>Nome</label>
         <input name='nome' />
         <label for='preco'>Preço</label>
         <input name='preco'/>
         <label for='estoque'>Estoque</label>
         <input name='estoque'/>
         <button>Salvar</button>
      </form>
      </>
   )
}
export default Form;