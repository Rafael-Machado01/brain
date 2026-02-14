class Funcionario {
  private: 
  // Atributes
  int id;
  string nome;
  float salario;

  // Method
  public:
 void ler();
  void imprimir();
  
  // Get
  int getId() {return this->id;};
  string getNome() {return this->nome;};
  float getSalario() {return this->salario;};

  // Set
  void setId(int id) {this->id = id;};
  void setNome(string nome) {this->nome = nome;};
  void setFloat(float salario) {
    if(salario <= 1500 || salario >= 10000) {
      this->salario = 1500;
    }else {
      this->salario = salario;
    }
  }
};

void Funcionario::ler(){
  cout << "Cadastro de funários" << endl;
  cout << "Informe o Id" << endl;
  cin >> id;
  cout << "Digite o nome do funcinário" << endl;
  cin >> nome;
  cout << "Digite o salário " << endl;
  cin >> salario;
}

void Funcionario::imprimir() {
  cout << "Lista de Funcionários" << endl;
  cout << id << " " << nome << " " << salario << endl;
}