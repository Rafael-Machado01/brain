Faça um app react que contem apenas um h1 que diz Bom dia ou Boa noite. Por Hora.

```
var text;
var color;
let time = new Date().getHours(); // Pega apenas a hora numérica
function App() {
if (time >= 6 && time < 12) {
// Bom dia entre 6h e 12h
text = "Bom Dia";
color = "yellow";
} else if (time >= 12 && time < 18) 
// Boa tarde entre 12h e 18h
text = "Boa Tarde";
color = "orange";
} else {
// Boa noite entre 18h e 6h
text = "Boa Noite";
color = "red";
}
return (
<>
<h1 style={{ color: color }}>{text}</h1>
</>
);}
export default App;
`````

