---
tags: [curso, react, tipscode, hooks, estado]
tipo: curso
fonte: "TipsCode"
---

# useState

`useState` é um Hook do React que permite adicionar estado a componentes funcionais. Ele retorna um par: o valor atual do estado e uma função para atualizá-lo.

```jsx
import { useState } from 'react';

function App() {
  const [count, setCount] = useState(0);

  function handleClick() {
    setCount(count + 1);
  }

  return (
    <div>
      <h1>{count}</h1>
      <button onClick={handleClick}>+</button>
    </div>
  );
}

export default App;
````

