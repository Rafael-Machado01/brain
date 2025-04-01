Renderize um array de informações que com oq aprendemos e que esteja componetizado.

Primeiro temos 4 - Componentes App, Note, Avatar e Data.

```
App
import data from "./data";
import Note from "./Note";
function App() {
return (
<>
{data.map((item, index) => {
return (
<div key={index}>
<Note
name={item.name}
phone={item.phone}
email={item.email}
imgURL={item.imgURL}/>
</div>
);
})}
</>);}
export default App;
````

```
Note
import Avatar from "./Avatar";
function Note(props) {
return (
<>
<Avatar src={props.imgURL} />
<h1>{props.name}</h1>
<p>{props.phone}</p>
<p>{props.email}</p>
</>);}
export default Note;
````

```
function Avatar(props) {
return (
<>
<img src={props.src} alt="" />
</>
);}
export default Avatar;
````

```
Data
const data = [
{
name: "Ayrton Senna",
imgURL: "",
email: "ayton@email.com",
phone: "+55 18 99740-2328",
},
{
name: "Lewis Hamilton",
imgURL: "",
email: "lewis@email.com",
phone: "+55 19 99740-2328",
},
{
name: "Max Verstapenn",
imgURL: "",
email: "max@email.com",
phone: "+55 20 99740-2328",
},];
export default data;
````

GG EASY