Exemplo de como usar uma função do componente pai para o filho 

```
Pai - App
remove() {
console.log('Clicked')
}
app() {
<Task onChecked={remove}/>
}
````

```
Filho - Task
task(props) {
<li onClick={props.onChecked}>Texto</li>
}
````


## Sobre ids

Por boa pratica e bom usar ids aleatorios 
npm uuids
