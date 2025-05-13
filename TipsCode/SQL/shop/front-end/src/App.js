import Form from './components/Form'
import Grid from './components/Grid'
import { useEffect, useState } from 'react';
import axios from 'axios';

function App() {
  const [products, setProducts] = useState([]);
  const [onEdit, setonEdit] = useState(null)
  const getProducts = async () => {
    try { 
      const res = await axios.get('http://localhost:3333/');
      setProducts(res.data);
    }
    catch(error) {
      console.log(error)
    }
  }
  useEffect( () => {
    getProducts()
  }, [setProducts])
  return (
  <>
    Cadrastro de Produtos
    <Form/>
    <Grid products={products}/>
  </>
  );
}
export default App;
