	
Formulário que pega o nome e sobrenome e da display.
```
import React, { useState } from "react";
function App() {
const [name, setName] = useState('');
const [lastName, setLastName] = useState('');
function fChange(event) {
setName(event.target.value);
}
function lChange(event) {
setLastName(event.target.value);
}
return (
<div className="container">
<h1>Olá {name} {lastName}</h1>
<form>
<input name="fName" placeholder="Nome" onChange={fChange} value={name} />
<input name="lName" placeholder="Sobrenome" onChange={lChange} value={lastName} />
<button>Enviar</button>
</form>
</div>
);
export default App;
````
Porém ficou muito repetitivo.

```
import React, { useState } from "react";
function App() {
const [fullName, setFullName] = useState({
fName: "",
lName: ""
});
	function handleChange(event) {
	const newValue = event.target.value;
	const inputName = event.target.name;
	setFullName(prevValue => {
return {
...prevValue, // Mantém o valor anterior
[inputName]: newValue // Atualiza o campo específico
}
});
}
return (
<div className="container">
<h1>Olá {fullName.fName} {fullName.lName}</h1>
<form>
<input
name="fName"
placeholder="Nome"
onChange={handleChange}
/>
<input
name="lName"
placeholder="Sobrenome"
onChange={handleChange}
/>
<button>Enviar</button>
</form>
</div>
);}
export default App;
````

