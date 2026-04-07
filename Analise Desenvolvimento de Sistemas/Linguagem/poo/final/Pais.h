class Pais
{
protected:
  int id;
  string descricao;

public:
  Pais() : id(0), descricao("Atleta") {};
  Pais(int id, string descricao) : id(id), descricao(descricao) {};

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

void Pais::imprimir()
{
  cout << "Imprimir - País - Competição." << endl;
  cout << "ID: " << getId() << endl;
  cout << "Descrição: " << getDescricao() << endl;
}

void Pais::ler()
{
  int sId = 0;
  string sDescricao = "";
  cout << "Ler - País - Competição." << endl;
  cout << "Digite um ID: " << endl;
  cin >> sId;
  setId(sId);
  cout << "Digite o Nome:" << endl;
  cin >> sDescricao;
  cin.ignore();
  getline(cin, sDescricao);
  setDescricao(sDescricao);
}