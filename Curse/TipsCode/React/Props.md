Props são propiedades podemos setar ou deixar dinamico.

```
Exemplo de Props
A function(props) // Precisa receber para funcionars
<h1 title='Hello'>{props.title}</h1>
<p text='World!'>{props.text}</p>
````

```
Exemplo de props externo
App.Jsx
function App()
<Content title='Hello' text='World!' />

Cotent.jsx
function Content(props)  // Precisa receber props aqui.
<h1>{props.title}</h1>
<p>{props.text}</p>
````

```
Exemplo de props array.
import data from './data' // Import do array
function App(props)
{data.map( (array, index) => {
 <div key={index}> </div>
 <h1>{array.title} </h1>
 <p>{array.text} </p>
})}
````

usamos o map para criar um novo array com o nome de array no exemplo.
e ai usamos array.propsquevcquer

**Chave `key`**: O React exige que cada item iterado tenha uma chave única (key) para identificar de forma eficiente os componentes. No exemplo, usamos o `index` do `.map()` como `key`.

```
Exemplo do Array
const data = [ 
{ title: 'Title 1', text: 'This is the first text.' },
{ title: 'Title 2', text: 'This is the second text.' }, 
{ title: 'Title 3', text: 'This is the third text.' }, ]; 
export default data;
````

Gg!

[[04 - Praticando props]]