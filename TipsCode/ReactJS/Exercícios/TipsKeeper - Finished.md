1 - Implemente a funcionalidade de adicionar nota.  x
- Crie uma constante que acompanha o titulo e o conteúdo.  x
- Passe a nova nota de volta para ao app 
- Adicione uma nova nota a um array
- Pegue o array e renderiza os componentes notes separados para cada item
2 - Implemente a funcionalidade de exclusão de notas


O primeiro problema é o mais facil apenas o html.

```
	export default function Input() {
return (
<form>
<input type="text" placeholder="Título da nota"/>
<textarea placeholder="Conteúdo da nota"/>
<button type="submit">Salvar</button>
</form>
)}
````

O segundo também e facil usamos um useState para guardar um objeto :

```
export default function Input() {
const [note, setNote] = useState({
title: '',
content: ''})
function handleChange(event) {
const { name, value } = event.target;
setNote({...note, [name]: value })}
return (
<form>
<input type="text" placeholder="Título da nota" onChange={handleChange}/>
<textarea placeholder="Conteúdo da nota" onChange={handleChange}/>
<button type="submit">Salvar</button>
</form>
)}
````

Agora usamos a função add por props e e pegamos o array do input + arraay do app

```
import React, { useState } from "react";
import Footer from "./Footer";
import Header from "./Header";
import Note from "./Note";
import Input from "./Input";
function App() {
const [notes, setNotes] = useState([])
function addNote(newNotes) {
setNotes( prevNotes => {
return [...prevNotes, newNotes] // Adicione o anterior com o nov})}
return (
<div>
<Header />
<Input onAdd={addNote}/>
{notes.map((noteItem) => {
return (
<Note
key={noteItem.id}
title={noteItem.title}
content={noteItem.content}/>)})}
<Footer />
</div>)}
export default App;
````

Agora com a função com remove

```
import React, { useState } from "react";
import Footer from "./Footer";
import Header from "./Header";
import Note from "./Note";
import Input from "./Input";
function App() {
const [notes, setNotes] = useState([])
function addNote(newNotes) {
setNotes( prevNotes => {
return [...prevNotes, newNotes] // Adicione o anterior com o novo
})
}
function deleteNote(id) {
setNotes(prevNotes => {
return prevNotes.filter((noteItem, index) => {
return index !== id;
});
});
}
return (
<div>
<Header />
<Input onAdd={addNote}/>
{notes.map((noteItem,index) => {
return (
<Note
key={index}
id={index}
title={noteItem.title}
content={noteItem.content}
onRemove={deleteNote}
/>
)
})}
<Footer />
</div>
)
}

export default App;
````