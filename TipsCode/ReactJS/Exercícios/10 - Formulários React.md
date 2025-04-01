Já temos  a base e precisamos mostrar na tela oq foi digitado.

```
import {useState, react} from "react";
function App() {
const [input, setInput] = useState('');
function Changed(event) {
setInput(event.target.value)
}
return (
<div className="container">
<h1>Olá {input}</h1>
<input type="text" placeholder="Qual seu nome?" value={input} onChange={Changed}/>
<button>Submit</button>
</div>);}
export default App;
````