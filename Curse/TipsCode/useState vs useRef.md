# UseState 
Serve para armazenamento de variaveis e para manipularmos ele usamos outra geralmente é assim :

```

const [count,setCount] = useState(0);
setCount é para atualizar a variável.
````

# UseRef 
Serve para armazenar referencias em variaveis por exemplo:

````
const nameRef = useRef();
function handleSubmit() {
console.log(nameRef.current.value) // Pegamos o valor do input qnd o usuario ativar a função handleSubmit
}

<input ref={nameRef}> // Aqui definimos qual variavel vamos usar e guardar a função
<button onClick={handleSubmit}> // Para qnd apetar o submit
````

- `useState` **atualiza o estado e re-renderiza o componente**.
    
- `useRef` **atualiza a referência, mas NÃO causa re-render**.

