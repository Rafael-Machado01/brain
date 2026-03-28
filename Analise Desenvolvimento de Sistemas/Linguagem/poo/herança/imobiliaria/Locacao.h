class Locacao : public Imovel, public Locador
{
private:
  int id;
  string data;
  float valor;

public:
  Locacao() : id(0), data("24-03-2026"), valor(0), Imovel(), Locador() {};
  Locacao(int id, string data, float valor, Imovel imo, Locador loc) : id(id), data(data), valor(valor), Imovel(imo), Locador(loc) {};

  int getId() { return this->id; }
  string getData() { return this->data; }
  float getValor() { return this->valor; }

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
  void setData(string data)
  {
    if (data == "")
    {
      cout << "Digite uma Data Válida!" << endl;
    }
    else
    {
      this->data = data;
    }
  }
  void setValor(float valor)
  {
    if (valor <= 10000)
    {
      cout << "Digite um valor válido!!" << endl;
    }
    else
    {
      this->valor = valor;
    }
  }
  void imprimir();
};

void Locacao::imprimir()
{
  cout << "Imobiliária - Locação" << endl;
  cout << "ID: " << getId() << endl;
  cout << "Data:" << getData() << endl;
  cout << "Valor: " << getValor() << endl;
  cout << "ID - Imóvel: " << Imovel::getId() << endl;
  cout << "Rua - Imóvel: " << Imovel::getRua() << endl;
  cout << "Bairro - Imóvel: " << Imovel::getBairro() << endl;
  cout << "Cidade - Imóvel: " << Imovel::getCidade() << endl;
  cout << "ID - Locador: " << Locador::getId() << endl;
  cout << "Nome - Locador:" << Locador::getNome() << endl;
}