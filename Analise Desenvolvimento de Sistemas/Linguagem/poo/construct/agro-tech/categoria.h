class Categoria {
  private:
  int id;
  string descricao;

  public:
  Categoria();
  Categoria(int,string);
  void imprimir();
  void ler();

  // Getters
  int getId() { return this->id;}
  string getDesc() { return this->descricao;}

  // Setters
  void setId(int id) {
    if (id <= 0) {
      cout << "ID Inválido!" << endl;
    }else {
      this->id = id;
    }
  }
  void setDesc(string desc) {
    if (desc == "") {
      cout << "Descrição Inválida!" << endl;
    }else {
      this->descricao = desc;
    }
  }
}
  
// Construtor padrão
Categoria::Categoria() {
  setId(1);
  setDesc("Padrão");
}

Categoria::Categoria(int id, string desc) {
  setId(id);
  setDesc(desc);
}

void Categoria::imprimir() {
  cout << "ID: " << getId() << endl;
  cout << "Descrição: " << getDesc() << endl 
}

void Categoria::ler() {
  int swapId=0;
  string swapDesc;

  cout << "Digite o ID: " << endl;
  cin >> swapId;
  setId(swapId)

  cout << "Digite a Descrição: " << endl;
  cin.ignore();
  getline(cin,swapDesc);
  setDesc(swapDesc)
}
