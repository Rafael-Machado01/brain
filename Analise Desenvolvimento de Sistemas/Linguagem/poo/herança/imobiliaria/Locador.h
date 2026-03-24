class Locador : Profissao
{
private:
  int id;
  string nome;
  string cidade;
  string estado;
  int idade;
  float salario;

public:
  Locador() : id(0), nome("Padrão"), Profissao(), cidade("Assis"), estado("São Paulo"), idade(18), salario(2400) {};
  Locador(int id, string nome, Profissao pro, string cidade, string estado, int idade, float salario) : id(id), nome(nome), Profissao(pro), cidade(cidade), estado(estado), idade(idade), salario(salario) {};

  int getId() { return this->id; }
  string getNome() { return this->nome; }
  string getCidade() { return this->cidade; }
  string getEstado() { return this->estado; }
  int getIdade() { return this->idade; }
  float getSalario() { return this->salario; }

  void setId(int id)
  {
    if (id <= 0)
    {
      cout << "Digite um ID Válido." << endl;
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
      cout << "Digite um Nome válido" << endl;
    }
    else
    {
      this->nome = nome;
    }
  }
  void setCidade(string cidade)
  {
    if (cidade == "")
    {
      cout << "Digite uma Cidade válida!" << endl;
    }
    else
    {
      this->cidade = cidade;
    }
  }
  void setEstado(string estado)
  {
    if (estado == "")
    {
      cout << "Digite um estado válido." << endl;
    }
    else
    {
      this->estado = estado;
    }
  }
  void setIdade(int idade)
  {
    if (idade < 18)
    {
      cout << "Digite uma Idade válida." << endl;
    }
    else
    {
      this->idade = idade;
    }
  }
  void setSalario(float salario)
  {
    if (salario < 1516)
    {
      cout << "Digite um salário válido." << endl;
    }
    else
    {
      this->salario = salario;
    }
  }
  void imprimir();
  void ler();
};

void Locador::imprimir()
{
  cout << "Imobiliária - Locador" << endl;
  cout << "ID: " << getId() << endl;
  cout << "Nome: " << getNome() << endl;
  cout << "ID de Profissão: " << Locador::getId() << endl;
  cout << "Profissão: " << Locador::getDescricao() << endl;
  cout << "Cidade: " << getCidade() << endl;
  cout << "Estado: " << getEstado() << endl;
  cout << "Idade: " << getIdade() << endl;
  cout << "Salário: " << getSalario() << endl;
}

void Locador::ler()
{
  int swapi;
  string swaps;
  float swapf;
  cout << "Imobiliária - Cadastro Locador" << endl;
  cout << "Digite o ID: " << endl;
  cin >> swapi;
  setId(swapi);
  cout << "Digite o Nome: " << endl;
  cin.ignore();
  getline(cin, swaps);
  setNome(swaps);
  cout << "Digite a Cidade: " << endl;
  getline(cin, swaps);
  setCidade(swaps);
  cout << "Digite o Estado: " << endl;
  getline(cin, swaps);
  setEstado(swaps);
  cout << "Digite a Idade: " << endl;
  cin >> swapi;
  setIdade(swapi);
  cout << "Digite o Salário: " << endl;
  cin >> swapf;
  setSalario(swapf);
}