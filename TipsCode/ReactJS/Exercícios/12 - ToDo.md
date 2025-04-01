
1. Quando um novo texto é escrito na entrada, seu estado deve ser salvo. X
2. Quando o botão adicionar é pressionado, os dados atuais na entrada devem ser adicionado a um array.  X
3. O < ul > deve exibir todos os itens do array como < li > X

Consegui porra!

```
import {React, useState} from "react";
function App() {
const [text, setText] = useState(""); // Input vazio
const [list, setList] = useState([]) // Aqui list inicia com um array vazio.
function Changed(event) {
setText(event.target.value);
} // Quando o input mudar vamos capturar o que foi digitado.
function add() {
setList(prevList => { // Aqui usamos o prevList que seria o vazio
return [
...prevList,
{
id: list.length + 1, // colocamos o id no Li
value: text // Pegamos o text que capturamos e colocamos no array
}
] // Fechando meu array então ele ficou assim [id: 1 value: text]
})
}
return (
<div className="container">
<div className="heading">
<h1>To-Do List</h1>
</div>
<div className="form">
<input type="text" onChange={Changed}/>
<button >
<span onClick={add}>Adicionar</span>
</button>
</div>
<div>
<ul>
{list.map( (item,index)=> { // Aqui usamos o map para exibir todos os itens no array.
return <li key={index}>{item.value}</li>
})}
</ul>
</div>
</div>
);}
export default App;
````
