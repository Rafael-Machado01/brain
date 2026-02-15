# this é um ponteiro fixo em c++
Ele sempre aponta para os atributos de uma classe definida em seu código.

Por exemplo quero usar fazer uma atribuição apatir de um método Setter

```
void setId(int id) {
	id = id;	
}
````

Aqui dá erro compilador não sabe qual é qual id.

```
void setId(int id) {
	this->id = id;	
}
````
Aqui o compilador sabe que está se refirindo a Id atributo.

