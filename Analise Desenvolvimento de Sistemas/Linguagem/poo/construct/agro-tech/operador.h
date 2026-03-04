class Operador{
  private:
  int id;
  string nome;
  int idade;
  float salario;

  public:
  Operador();
  Operador(int,string,int,float);
  void ler();
  void imprimir();


  int getId() {return this->id;}
  string getNome() {return this->nome;}
  int getIdade() {return this->idade;}
  float getSalario() {return this->salario;}

  void setId(int id) {
    if(id <= 0) {
      cout << "Digite um ID válido." << endl;
    }else {
      this->id = id;
    }
  }
  void setNome(string nome) {
    if(nome == "") {
      cout << "Digite um nome válido." << endl;
    }else {
      this->nome = nome;
    }
  }
  void setIdade(int idade) {
    if(idade < 18) {
      cout << "Digite uma idade válida." << endl;
    }else {
      this->idade = idade;
    }
  }
  void setSalario(float salario) {
    if(salario < 1.621) {
      cout << "Digite um sálario válido" << endl;
    }else {
      this->salario = salario;
    }
  }

};

Operador::Operador() {
  setId(1);
  setNome("Nome Padrão");
  setIdade(18);
  setSalario(1.621);
}

Operador::Operador(int id,string nome,int idade,float salario) {
  setId(id);
  setNome(nome);
  setIdade(idade);
  setSalario(salario);
}

void Operador::imprimir() {
  cout << "Sistema AgroTech - Operador" << endl;
  cout << "ID: " << getId() << endl;
  cout << "Nome: " << getSalario() << endl;
  cout << "Idade: " << getNome() << endl;
  cout << "Salário: " << getSalario() << endl;
}

void Operador::ler() {
  int swapId=0,swapIdade=0;
  string swapNome;
  float swapSalario=0.0;

  cout << "Digite o ID: " << endl;
  cin >> swapId;
  setId(swapId);

  cout << "Digite o Nome: " << endl;
  cin.ignore();
  getline(cin,swapNome);
  setNome(swapNome);

  cout << "Digite a Idade: " << endl;
  cin >> swapIdade;
  setIdade(swapIdade);

  cout << "Digite o Salário: " << endl;
  cin >> swapSalario;
  setSalario(swapSalario);
}