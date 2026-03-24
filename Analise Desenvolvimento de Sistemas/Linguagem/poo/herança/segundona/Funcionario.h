class Funcionario : public Cargo
{
private:
  int id;
  string nome;
  float salario;

public:
  Funcionario() : id(0), nome(""), salario(1516), Cargo() {};
  Funcionario(int id, string nome, float salario, Cargo cargo) : id(id), nome(nome), salario(salario), Cargo(cargo) {};

  int getId() { return this->id; }
  string getNome() { return this->nome; }
  float getSalario() { return this->salario; }

  void setId(int id)
  {
    if (id <= 0)
    {
      cout << "Digite um ID Válido!" << endl;
    }
    else
    {
      this->id = id;
    }
  }
  void setNome(string nome)
  {
    if (nome == "")
    {
      cout << "Digite um Nome Válido!" << endl;
    }
    else
    {
      this->nome = nome;
    }
  }
  void setSalario(float salario)
  {
    if (salario < 1412)
    {
      cout << "Digite salários apatir do salário minímo." << endl;
    }
    else
    {
      this->salario = salario;
    }
  }

  void aumento() { this->salario = this->salario + (this->salario * 20 / 100); }
  void aumento(int perc) { this->salario = this->salario + (this->salario * perc / 100); }
  void aumento(float val) { this->salario = this->salario + val; }
  void imprimir()
  {
    cout << "Imprimir - Funcionário" << endl;
    cout << "ID:" << this->id << endl;
    cout << "Nome:" << this->nome << endl;
    cout << "Cargo: " << Cargo::id << " - " << Cargo::cargo << endl;
    cout << "Salário:" << this->salario << endl;
  }
};