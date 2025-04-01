Pegue o código refatorado e faça funcionar 

```
import React, {useState} from "react";
function InputArea(props) {
const [inputText, setInputText] = useState('');
function addItem() {
props.setItems( (prevItems) => {
return [...prevItems, inputText]
} )
setInputText('')
}
function handleChange(event) {
const newValue = event.target.value;
setInputText(newValue);
};
return (
<div className="form">
<input onChange={handleChange} type="text" value={inputText} />
<button onClick={addItem}>
<span>Add</span>
</button>
</div>
)}
export default InputArea;
````

```
import React, { useState } from "react";
import ToDoItem from "./ToDoItem";
import InputArea from "./InputArea";
function App() {
const [items, setItems] = useState([]);
function deleteItem(id) {
setItems( (prevItems) => {
return prevItems.filter(
(item, index) => {
return index !== id
}
)
} )
} 
return (
<div className="container">
<div className="heading">
<h1>To-Do List</h1>
</div>
<InputArea setItems={setItems} />
<div>
<ul>
{
items.map( (todoItem, index) => <ToDoItem key={index} id={index} text={todoItem} onChecked={deleteItem} /> )
}
</ul>
</div>
</div>
);}
export default App;
````
