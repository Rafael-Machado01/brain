const express = require('express');
const app = express();
const port = 3000;

app.listen( port, () => {
console.log('O servidor está em', port);
});

app.get('/', (req,res) => {
   const date = new Date();
   let day = date.getDay();
if(day == 6 || day == 0) {
   res.send('Hoje é fim de semana! Para de trabalhar.')
}else {
   res.send('Hoje é um dia de muito trabalho.')
}
})