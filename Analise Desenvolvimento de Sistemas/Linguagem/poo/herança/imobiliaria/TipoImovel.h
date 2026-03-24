class TipoImovel
{
protected:
  int id;
  string descricao;

public:
  TipoImovel() : id(0), descricao("Construtor Padrão.") {}
  TipoImovel(int id, string descricao) : id(id), descricao(descricao) {}

  int getId() { return this->id; }
  string getDescricao() { return this->descricao; }

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

void TipoImovel::imprimir()
{
  cout << "Imobiliária - Tipo Imóvel" << endl;
  cout << "ID :" << getId() << endl;
  cout << "Descrição: " << getDescricao() << endl;
}

void TipoImovel::ler()
{
  int swapId = 0;
  string swapDescricao = 0;
  cout << "Imobiliária - Tipo Imóvel" << endl;

  cout << "Digite o ID: " << endl;
  setId(swapId);

  cout << "Digite a Descrição: " << endl;
  setDescricao(swapDescricao);
}