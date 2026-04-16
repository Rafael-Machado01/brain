class Modalidade : public Competicao
{
private:
  int id;
  string descricao;

public:
  Modalidade() : id(0), descricao("Padrão"), Competicao() {};
  Modalidade(int id, string descricao, Competicao competicao) : id(id), descricao(descricao), Competicao(competicao) {};

  int getId() { return this->id; }
  string getDescricao() { return this->descricao; }

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

  void setDescricao(string descricao)
  {
    if (descricao == "")
    {
      cout << "Digite uma descrição válida!" << endl;
    }
    else
    {
      this->descricao = descricao;
    }
  }

  void imprimir();
  void ler();
};

void Modalidade::imprimir()
{
  cout << "Imprimir - Modalidade - Competição" << endl;
  cout << "ID: " << getId() << endl;
  cout << "Descrição: " << getDescricao() << endl;
  cout << "ID Competição:" << Competicao::getId() << endl;
  cout << "Descrição Competição : " << Competicao::getDescricao() << endl;
}

void Modalidade::ler()
{
  int sI;
  string sS;
  cout << "Ler - Modalidade - Competição" << endl;
  cout << "Digite o ID:" << endl;
  cin >> sI;
  cout << "Digite a descrição: " << endl;
  getline(cin, sS);
  setId(sI);
  setDescricao(sS);
}