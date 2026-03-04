class Maquina {
  private:
    int id;
    string modelo;
    int categoria;
    string marca;
    float potencia;
    float valor;

  public:
  Maquina();
  Maquina(int,string,int,string,float,float);
  void imprimir();
  void ler();

  // Getters
  int getId(){return this->id;}
  string getModelo(){return this->modelo;}
  int getCategoria(){return this->categoria;}
  string getMarca(){return this->marca;}
  float getPotencia(){return this->potencia;}
  float getValor(){return this->valor;}

  // Setters
  void setId(int id){
    if(id <= 0) {
      cout << "ID Inválido" << endl;
    }else {
      this->id = id;
    }
  }

  void setModelo(string modelo) {
    if(modelo == "") {
      cout << "Digite um modelo Válido" << endl;
    }else {
      this->modelo = modelo;
    }
  }

  void setCategoria(int categoria) {
    if(categoria <= 0) {
      cout << "Digite uma categoria Válida " << endl;
    }else {
      this->categoria = categoria;
    }
  }

  void setMarca(string marca) {
    if(marca == "") {
      cout << "Digite uma Marca Válida" << endl;
    }else {
      this->marca = marca;
    }
  }
  void setPotencia(float potencia){
    if(potencia <= 0.0) {
      cout << "Potencia Inválida" << endl;
    }else {
      this->potencia = potencia;
    }
  }

  void setValor(float valor){
    if(valor <= 0.0) {
      cout << "Valor Inválida" << endl;
    }else {
      this->valor = valor;
    }
  }
};



Maquina::Maquina() {
  setId(1);
  setModelo("Padrão");
  setCategoria(1);
  setMarca("Padrão");
  setPotencia(1);
  setValor(1);
}

Maquina::Maquina(int id,string modelo,int categoria,string marca,float potencia,float valor) {
  setId(id);
  setModelo(modelo);
  setCategoria(categoria);
  setMarca(marca);
  setPotencia(potencia);
  setValor(valor);
}

void Maquina::imprimir() {
  cout << "Sistema AgroTech - Máquina" << endl;
  cout << "ID: " << getId() << endl;
  cout << "Modelo: " << getModelo() << endl;
  cout << "Categoria: " << getCategoria() << endl;
  cout << "Marca: " << getMarca() << endl;
  cout << "Potencia: " << getPotencia() << endl;
  cout << "Valor" << getValor() << endl;

}

void Maquina::ler() {
  int swapId=0,swapCategoria=0;
  string swapModelo,swapMarca;
  float swapPotencia=0.0,swapValor=0.0;

  cout << "Digite o ID: " << endl;
  cin >> swapId;
  setId(swapId);

  cout << "Digite o Modelo: " << endl;
  cin.ignore();
  getline(cin,swapDesc);
  setDesc(swapModelo);

  cout << "Digite o número da categoria: " << endl;
  cin >> swapCategoria;
  setCategoria(swapCategoria);

  cout << "Digite a marca: " << endl;
  cin >> swapMarca;
  setMarca(swapMarca);

  cout << "Digite a potencia: " << endl;
  cin >> swapPotencia;
  setPotencia(swapPotencia);

  cout << "Digite o valor: " << endl;
  cin >> swapValor;
  setValor(swapValor);
}
