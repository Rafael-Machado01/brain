const express = require('express');
const app = express();
const port = 3000;

app.use(express.urlencoded({extended : true})) // Para "liberar para ler o html"

app.set('view engine', 'ejs')
app.listen( port, () => {
console.log('O servidor está em', port);
});
var item = []
app.get('/', (req,res) => {
  let today = new Date();
  let options = {
   weekday: 'long',year: 'numeric', month: 'long', day:'numeric'}
   let day = today.toLocaleDateString('pt-BR',options);
   
res.render('list', {day : day, task : item} )
});


app.post('/', (req,res) => {
   let item = req.body.add;
   item.push(newItem)
   console.log(item)
   res.redirect('/')

})