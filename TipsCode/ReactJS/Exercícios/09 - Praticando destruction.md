```
import data from "./data";
const [tesla, porshe, ferrari] = data;
function App() {
return {
<>
<h1>{tesla.brand}</h1>
<h1>{tesla.model}</h1>
<h1>{tesla.color}</h1>
<h1>{tesla.maxSpeed}</h1>
</>
);
}
export default App;
````

```
Data
const data = [
{
model: "Model S",
brand: "Tesla",
color: "White",
maxSpeed: "200",
},
{
model: "Macan",
brand: "Porshe",
color: "Blue",
maxSpeed: "180",
},
{
model: "Enzo",
brand: "Ferrari",
color: "Red",
maxSpeed: "380",
},
];
export default data;
````
	