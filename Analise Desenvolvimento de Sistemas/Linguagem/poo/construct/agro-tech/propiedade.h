class Propiedade {
  private:
    int id;
    string nome;
    string propietario;
    float area;
  public:
  Propiedade();
  Propiedade(int,string,string,float);
  void ler();
  void imprimir();

  int getId() {return this->id;}
  string getNome() {return this->nome;}
  string getPropietario() {return this->propietario;}
  float getArea() {return this->area;}

  void setId(int id) {
    if(id <= 0 ) {
      cout << "Digite um ID válido" << endl;
    }else {
      this->id = id;
    }
  }
  void setNome(string nome) {
    if(nome == "") {
      cout << "Digite um nome válido" << endl;
    }else {
      this->nome = nome;
    }
  }
  void setPropietario(string propietario) {
    if(propietario == "") {
      cout << "Digite um nome válido" << endl;
    }else {
      this->propietario = propietario;
    }
  }
  void setArea(float area) {
    if(area <= 0.0) {
      cout << "Digite um valor válido." << endl;
    }else {
      this->area = area;
    }
  } 

};

Propiedade::Propiedade() {
  setId(1);
  setNome("Padrão");
  setPropietario("Padrão");
  setArea(1.0);
}

Propiedade::Propiedade(int id,string nome,string propietario,float area) {
  setId(id);
  setNome(nome);
  setPropietario(propietario);
  setArea(area);
}

void Propiedade::imprimir() {
  cout << "Sistema AgroTech - Propietario" << endl;
  cout << "ID: " << getId() << endl;
  cout << "Nome: " << getNome() << endl;
  cout << "Propietario: " << getPropietario() << endl;
  cout << "Area: " << getArea() << endl;
}

void Propiedade::ler() {
  int swapId=0;
  string swapNome,swapPropietario;
  float swapArea=0.0;

  cout << "Digite o ID: " << endl;
  cin >> swapId;
  setId(swapId);

  cout << "Digite o Nome: " << endl;
  cin.ignore();
  getline(cin,swapNome);
  setNome(swapNome);

  cout << "Digite o Propieitario: " << endl;
  getline(cin,swapPropietario);
  setPropietario(swapPropietario);

  cout << "Digite Area: " << endl;
  cin >> swapArea;
  setArea(swapArea);
}