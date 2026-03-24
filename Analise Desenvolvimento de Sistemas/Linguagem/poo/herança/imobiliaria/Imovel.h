class Imovel : TipoImovel
{
private:
  int id;
  string rua;
  string bairro;
  string cidade;
  bool ocupado;

public:
  Imovel() : id(0), TipoImovel(), rua(""), bairro(""), cidade(""), ocupado(false) {};
  Imovel(int id, TipoImovel tip, string rua, string bairro, string cidade, bool ocupado) : id(id), TipoImovel(tip), rua(rua), bairro(bairro), cidade(cidade), ocupado(ocupado) {};

  int getId() { return this->id; }
  string getRua() { return this->rua; }
  string getBairro() { return this->bairro; }
  string getCidade() { return this->cidade; }
  bool getOcupado() { return this->ocupado; }

  void setId(int id)
  {
    if (id <= 0)
    {
      cout << "Digite um Id Válido." << endl;
    }
    else
    {
      this->id = id;
    }
  }

  void setRua(string rua)
  {
    if (rua == "")
    {
      cout << "Digite um nome de Rua válida." << endl;
    }
    else
    {
      this->rua = rua;
    }
  }

  void setBairro(string bairro)
  {
    if (bairro == "")
    {
      cout << "Digite um nome de bairro válido." << endl;
    }
    else
    {
      this->bairro = bairro;
    }
  }

  void setCidade(string cidade)
  {
    if (cidade == "")
    {
      cout << "Digite um nome de cidade válida." << endl;
    }
    else
    {
      this->cidade = cidade;
    }
  }

  void setOcupado(bool ocupado)
  {
    this->ocupado = ocupado;
  }

  void imprimir();
  void ler();
};

void Imovel::imprimir()
{
  cout << "Imobiliária - Imóvel" << endl;
  cout << "ID :" << getId() << endl;
  cout << "ID do Tipo: " << TipoImovel::getId() << endl;
  cout << "Descrição do Tipo: " << TipoImovel::getDescricao() << endl;
  cout << "Rua: " << getRua() << endl;
  cout << "Bairro: " << getBairro() << endl;
  cout << "Cidade: " << getCidade() << endl;
  cout << "Status de ocupado: " << getOcupado() << endl;
}

void Imovel::ler()
{
  int swapi;
  string swaps;
  bool swapb;
  cout << "Cadastro de Imóveis." << endl;
  cout << "Digite o ID: " << endl;
  cin >> swapi;
  setId(swapi);
  cout << "Digite a rua: " << endl;
  cin.ignore();
  getline(cin, swaps);
  setRua(swaps);
  cout << "Digite o bairro: " << endl;
  getline(cin, swaps);
  setBairro(swaps);
  cout << "Digite a cidade: " << endl;
  getline(cin, swaps);
  setCidade(swaps);
  cout << "Digite o status de ocupação: " << endl;
  cin >> swapb;
  setOcupado(swapb);
}