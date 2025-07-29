No exemplo de [[Components]] se usarmos o mesmo componente duas vezes, ele exibirá o mesmo conteúdo.

````
function HomePage() {
  return (
    <div>
      <Header title="React" />
    </div>
  );
}
````
Agora no Header 
````
function Header(props) {
  return <h1>Develop. Preview. Ship.</h1>;
}
se usarmos console.log(props) vemos oq tem nele 
neste exemplo {title: "React"}
````

Porém ele vem como objeto ai vamos Desestruturar e nomear o valores.

````
function Header({ title }) // Desestruturação
{
  console.log(title);
  return <h1>{title}</h1>; // Passando a variavel aqui.
}
````

Isso em Javascript

# Em JSX
````
function Header(props) {
  return <h1>{props.title}</h1>;
}
````
Ou com algo antes
```
function Header({ title }) {
  return <h1>{`Cool ${title}`}</h1>;
}
```





