Podemos armazenar um css global na pasta /ui que aprendemos na [[Estrutura de Pasta]].

Podemos importar o arquivo em qualquer componente do aplicativo, mais sempre é de boa pratica importá-lo de nível superior ou no meu "app" ou index.

Para podermos usar o tailwind usamos no global:

```
@tailwind base;
@tailwind components;
@tailwind utilities;
````

E para usarmos usamos igual o Bootstrap nominado nas classes.

```
<h1 className="text-blue-500">I'm blue!</h1>
````



