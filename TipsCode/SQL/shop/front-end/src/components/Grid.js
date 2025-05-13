const Grid = ({products}) => {
   console.log(products)
   return(
      <table>
         <tr>
            <th>Id</th>
            <th>Nome</th>
            <th>Preço</th>
            <th>Estoque</th>
            </tr>
               {products.map((item,ID) => (
                  <>
                   <td>{item.ID}</td>
 <td>{item.NOME}</td>
 <td>{item.PRECO}</td>
 <td>{item.ESTOQUE}</td>
 <td>edit</td>
 <td>trash</td>
                  </>
                 

               )
                 
                  
               )}
      </table>
   )
}
export default Grid;