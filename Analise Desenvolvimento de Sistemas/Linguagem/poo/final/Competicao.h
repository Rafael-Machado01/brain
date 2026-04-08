class Competicao
{
protected:
  int id;
  string descricao;
  string local;
  string dataInicio;
  string dataFim;

public:
  Competicao() : id(0), descricao("Padrao"), local("Assis"), dataInicio("2025"), dataFim("2026") {};
  Competicao(int id, string descricao, string local, string dataInicio, string dataFim) : id(0), descricao(descricao), local(local), dataInicio(dataInicio), dataFim(dataFim) {};

  int getId() { return this->id; }
  void getDescricao() { return this->descricao; }
  void getLocal() { return this->local; }
  void getDataInicio() { return this->dataIncio; }
  void getDataFim() { return this->dataFim; }

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

  void setLocal(string local)
  {
    if (local == "")
    {
      cout << "Digite uma localização válida!" << endl;
    }
    else
    {
      this->local = local;
    }
  }

  void setDataInicio(string dataInicio)
  {
    if (dataInicio == "")
    {
      cout << "Digite uma data válida!" << endl;
    }
    else
    {
      this->dataInicio = dataInicio;
    }
  }

  void setDataInicio(string dataFim)
  {
    if (dataFim == "")
    {
      cout << "Digite uma data válida!" << endl;
    }
    else
    {
      this->dataFim = dataFim;
    }
  }

  void ler();
  void imprimir();
};
void Competicao::imprimir()
{
  cout << "Imprimir - Competição - Competição " << endl;
  cout << "ID:" << getId();
  cout << "Descrição: " << getDescricao();
  cout << "Local:" << getLocal();
  cout << "Data Inicio: " << getDataInicio();
  cout << "Data Fim: " << getDataFim();
}

void Competicao::ler()
{
  int sI = 0;
  string sS;
  cout << "Ler - Competição - Competição" << endl;
  cout << "Digite o ID:" << endl;
  cin >> sI;
  setId(sI);
  cout << "Digite a Descrição:" << endl;
  cin.ignore();
  getline(cin, sS);
  setDescricao(sS);
  cout << "Digite o Local:" << endl;
  cin.ignore();
  getline(cin, sS);
  setLocal(sS);
  cout << "Digite a Data do Inicio: " << endl;
  cin.ignore();
  getline(cin, sS);
  setDataInicio(sS);
  cout << "Digite a Data do Fim:" << endl;
  cin.ignore();
  getline(cin, sS);
  setDataFim(sS);
}