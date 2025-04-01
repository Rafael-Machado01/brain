
Mostre a hora atual em um h1
Quando o botão for cliclado use um setInterval para atualizar a hora a cada segundo
```
import { useState } from "react";
function App() {
const [time, setTime] = useState(new Date().toLocaleTimeString());
function handleClick() {
setTime(new Date().toLocaleTimeString());
}
setInterval(handleClick, 1000);
return (
<>
<h1>{time}</h1>
<button onClick={handleClick}>Atualize</button>
</>
);
}
export default App;
````

Guardei a variavel em um useState e usei o set para pegar a hora atualizado.
