Instale o express.

```
const express = require('express');
const app = express();
const port = 3000;
app.listen(port, () => {
console.log('Servidor está rodando em https://localhost:${port}')});
app.get('/', (req, res) => {
res.send('Hello World!')
});
\\ Constante Port é opcional.
````


