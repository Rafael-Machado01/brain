Componentize o li do [[12 - ToDo]]


```
import React from "react";
function Task(props) {
return (
<li>{props.text}</li>
)
}
export default Task;
````

E no app no map coloco```<Task text={todoItem}/>```

Segundo desafio quando a task for clicada seja riscada.

```
import React,{ useState} from "react";
function Task(props) {
const [end, setEnd] = useState(false);
function risked() {
setEnd((prevValue) => {
return !prevValue
})
}
return (
li onClick={risked} style={{textDecoration: end? 'line-through': 'none' }} >{props.text}</li>
)
}
export default Task;
````

Agora vamos remover com filter!

```
import React, { useState } from "react";
import Task from './Task'
function App() {
const [inputText, setInputText] = useState('');
const [items, setItems] = useState([]);
function handleChange(event) {
const newValue = event.target.value;
setInputText(newValue);
}
function addItem() {
setItems( (prevItems) => {
return [...prevItems, inputText]
} )
setInputText('')
}
function remove(id) {
setItems((prevItems) => {
return prevItems.filter((item, index) => {
return index === id; // Retorna apenas os itens que têm índice diferente de id
});
});
}
return (
<div className="container">
<div className="heading">
<h1>To-Do List</h1>
</div>
<div className="form">
<input onChange={handleChange} type="text" value={inputText} />
<button onClick={addItem}>
<span>Adicionar</span>
</button>
</div>
<div>
<ul>
{
items.map( (todoItem, index) => <Task key={index} id={index} onChecked={remove} text={todoItem}/> )
}
</ul>
</div>
</div>
);}
export default App;
````

```
import React from "react";
function Task(props) {
return (
<li onClick={ () => {
props.onChecked(props.id)
}}>{props.text}</li>
)}
export default Task;
````
