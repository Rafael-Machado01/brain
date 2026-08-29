---
tags: [aula, poo, codigo, cpp]
disciplina: "Linguagem"
tipo: aula
---

# Ponteiro this em C++
Ele sempre aponta para os atributos de uma classe definida em seu código.

Por exemplo, quero usar fazer uma atribuição a partir de um método Setter

```
void setId(int id) {
	id = id;	
}
````

Aqui dá erro, o compilador não sabe qual é qual id.

```
void setId(int id) {
	this->id = id;	
}
````
Aqui o compilador sabe que está se referindo ao atributo Id.

