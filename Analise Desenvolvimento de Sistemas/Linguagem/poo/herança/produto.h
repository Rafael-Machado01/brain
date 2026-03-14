class Produto {
  private:
    int id;
    string descricao;
    Categoria categoria;
    float qtde;
    float valor;
  
  public:
  Produto();
  Produto(int,string,Categoria,float,float);
  void imprimir();

  int getId() {return this->id;}
  string getDescricao() {return this->descricao;}
  Categoria getCategoria() {return this->categoria;}
  float getQtde() {return this->qtde;}
  float getValor() {return this->valor;}

  void setId(int id) {
    if(id == 0) {
      cout << "Digite um Id válido" << endl;
    }else {
      this->id = id;
    }
  }
  void setDescricao(string desc) {
    if(desc == "") {
      cout << "Digite uma descrição válida." << endl;
    }else {
      this->descricao = desc;
    }
  }
  void setCategoria(Categoria cat) {this->categoria = cat;}
  void setQtde(float qtde) {
    if(qtde == 0) {
      cout << "Digite uma quantidade válida." << endl;
    }else {
      this->qtde = qtde;
    }
  }
  void setValor(float valor) {
    if(valor == 0) {
      cout << "Digite um valor válido" << endl;
    }else {
      this->valor = valor;
    }
  }
};

Produto::Produto() {
  this->id = 0;
  this->descricao = "";
  this->categoria = Categoria();
  this->qtde = 0;
  this->valor = 0;
}
Produto::Produto(int id,string desc,Categoria cat,float qtde,float valor) {
  this->id = id;
  this->descricao = desc;
  this->categoria = cat;
  this->qtde = qtde;
  this->valor = valor;
}


void Produto::imprimir() {
  cout << "ID: " << this->id << endl;
  cout << "Descrição: " << this->descricao << endl;
  cout << "Categoria ID: " << this->categoria.getId() << endl;
  cout << "Categoria Descricão: " << this->categoria.getDesc() << endl; 
  cout << "Quantidade: " << this->qtde << endl;
  cout << "Valor: " << this->valor << endl;
}
