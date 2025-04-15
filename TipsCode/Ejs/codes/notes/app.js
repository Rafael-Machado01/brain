const express = require('express');
const app = express();
const port = 3000;

app.set('view engine', 'ejs')
app.listen( port, () => {
console.log('O servidor está em', port);
});

app.get('/', (req,res) => {
   const date = new Date();
   let day = date.getDay();
   let msg = ''
if(day == 6 || day == 0) {
   msg = 'Final de semana'
   res.send('Hoje é fim de semana! Para de trabalhar.')
   
}else {
   msg = 'Dia de semana';
}
res.render('list', {msg : msg} )
})