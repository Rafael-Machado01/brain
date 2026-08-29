---
tags: [aula, poo, codigo, cpp]
disciplina: "Linguagem"
tipo: aula
---

# Como declarar e usar.
```
classe aviao {
	public:
	// Atributos
	int id;
	string tipo;
	int velocidade;
	float combustivel;
	// Métodos
	void ler() {
	cout << "Digite a velocidade máxima"
	cin >> velocidade
	}
}


int main() {
	aviao object; // Declarando o objeto
	object.ler();  // Acessando um método.
}

```

# Incluindo Encapsulamento.


`private:`
	`int id;`
	`string tipo;`
	`int velocidade;`
	`float combustivel;`
`public:`
	`void ler() {`
	`cout << "Digite a velocidade máxima"`
	`cin >> velocidade`
	`}`
	
	// Getters: agora você só pode usar os atributos a partir de um método get.
	`int getId(return this-> id;)` 
	
	// Setters para manipular a partir de um método também 
	`void setId(int id) {this->id = id;};`


Para entender melhor leia [[Encapsulamento]] e [[This]].