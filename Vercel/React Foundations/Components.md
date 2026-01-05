Para criar uma div chama main em React você usa isso:
```
function Main() {
return <div> </div>
}
```
Em JSX o navegador não lê JSX então vamos usar compiladores por padrão o react usa o Babel.

![[Pasted image 20250729072656.png]]
# Podemos usar components dentro de components
```
function Main() {
return <div>
<Header/>
</div>
}
````
## Criando e respeitando uma arvore de componentes.

![[Pasted image 20250729072739.png]]


