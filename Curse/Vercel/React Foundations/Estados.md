# Button Like
Criando um [[Components]] de botão de like com os os Eventos.

```
function handleClick() {
console.log('+1 like')
}
<button onCLick={}>Like</button>
````

# Usando o useState
Declarar
````
const [likes] = React.useState();
````
O primeiro item no array é o estado value, posso nomear qualquer coisa.
````
const [likes,setLikes] = React.useState(0); // Declarei para começar com zero
````
O segundo é a função de update. posso nomear de qualquer coisa porém sempre é bom ser Declarativa e claro oque faz.


Sendo assim podemos usar as funções do use state e já mostrar para o usuário e aumentar a cada click.

````function HomePage() {
  // ...
  const [likes, setLikes] = React.useState(0);
 
  function handleClick() {
    setLikes(likes + 1); // Aumentando a contagem Likes a cada click
  }
 
  return (
    <div>
      {/* ... */}
      <button onClick={handleClick}>Likes ({likes})</button> // Aqui mostramos o estado da contagem por exemplo 4 click 4 likes.
    </div>
  );
}
````


**Nota:** Ao contrário dos [[Props]] que são passados para os componentes como o primeiro parâmetro de função, o estado é iniciado e armazenado dentro de um componente. Você pode passar as informações do estado para os componentes infantis como [[Props]], mas a lógica para atualizar o estado deve ser mantida dentro do componente onde o estado foi criado inicialmente.

Os [[Props]]    o informações somente de leitura que são passadas para componentes. Estado são informações que podem mudar ao longo do tempo, geralmente desencadeadas pela interação do usuário.
