t# Como declarar e usar.
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
	cout << "Digite a velocidade maxima"
	cin >> velocidade
	}
}


int main() {
	aviao object; // Declando o objeto
	object.ler();  // Acessando um metodo.
}

```

# Incluindo Emcapsulamento.


`private:`
	`int id;`
	`string tipo;`
	`int velocidade;`
	`float combustivel;`
`public:`
	`void ler() {`
	`cout << "Digite a velocidade maxima"`
	`cin >> velocidade`
	`}`
	
	`// Geters agora voce so pode usar o atributos apatir de um metodo get.`
	`int getId(return this-> id;)` 
	
	`// Seters para manipular apatir de um metodo também` 
	`void setId(int id) {this->id = id;};`


Para entender melhor leia [[Emcapsulamento]] e [[This]].