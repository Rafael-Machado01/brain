class Categoria {
  protected:
    int id;
    string descricao;
  public:
  // Constructs inline
  Categoria(): id(0), descricao(""){}
  Categoria(int id, string desc): id(id), descricao(desc) {}

  int getId() {return this->id;}
  string getDesc() {return this->descricao;}

  void setId(int id) {
    if(id <= 0 ) {
      cout << "Digite um Id Válido." << endl;
    }else {
      this->id = id;
    }
}
  void setDesc(string desc) {
    if(desc == "") {
      cout << "Digite uma descrição válida." << endl;
    }else {
      this->descricao = desc;
    }
}

  void imprimir();
  void ler();
};

void Categoria::imprimir() {
  cout << "ID:" << getId() << endl;
  cout << "Descrição:" << getDesc() << endl;
}

void Categoria::ler() {
  int swap;
  string swaap;
  cout << "Digite o ID: " << endl;
  cin >> swap;
  setId(swap);

  cout << "Digite a Descrição: " << endl;
  cin >> swaap;
  setDesc(swaap); 
}
