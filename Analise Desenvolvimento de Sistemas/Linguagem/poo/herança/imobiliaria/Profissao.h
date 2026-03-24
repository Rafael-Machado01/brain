class Profissao
{
protected:
  int id;
  string descricao;

public:
  Profissao() : id(0), descricao("Construtor padrão") {};
  Profissao(int id, string descricao) : id(id), descricao(descricao) {};

  int getId() { return this->id; }
  string getDescricao() { return this->descricao; }

  void setId(int id)
  {
    if (id <= 0)
    {
      cout << "Digite um ID válido." << endl;
    }
    else
    {
      this->id = id;
    }
  }
  void setDescricao(string descricao)
  {
    if (descricao == "")
    {
      cout << "Digite uma descrição válida." << endl;
    }
    else
    {
      this->descricao = descricao;
    }
  }
  void imprimir();
  void ler();
};

void Profissao::imprimir()
{
  cout << "Imobiliária - Profissão" << endl;
  cout << "ID: " << getId() << endl;
  cout << "Descrição: " << getDescricao() << endl;
}

void Profissao::ler()
{
  int swapi;
  string swaps;
  cout << "Imobiliária - Cadastro Profissões" << endl;
  cout << "Digite o ID:" << endl;
  cin >> swapi;
  setId(swapi);
  cout << "Digite a descrição:" << endl;
  cin >> swaps;
  setDescricao(swaps);
}