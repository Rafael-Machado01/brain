class Participacao
{
private:
  int id;
  Atleta atleta;
  Modalidade modalidade;
  string data;
  int colocacao;
  float pontos;

public:
  Participacao() : id(0), atleta(), modalidade(), data("0"), colocacao(0), pontos(0.0) {};
  Participacao(int id, Atleta atleta, Modalidade modalidade, string data, int colocacao, float pontos) : id(id), atleta(atleta), modalidade(modalidade), data(data), colocacao(colocacao), pontos(pontos) {};

  int getId() { return this->id; }
  Atleta getAtleta() { return this->atleta; }
  Modalidade getModalidade() { return this->modalidade; }
  string getData() { return this->data; }
  int getColocacao() { return this->colocacao; }
  float getPontos() { return this->pontos; }

  void setId(int id)
  {
    if (id < 0)
    {
      cout << "Digite um ID Válido" << endl;
    }
    else
    {
      this->id = id;
    }
  }
  void setAtleta(Atleta atleta)
  {
    this->atleta = atleta;
  }
  void setModalidade(Modalidade modalidade)
  {
    this->modalidade = modalidade;
  }
  void setData(string data)
  {
    if (data == "")
    {
      cout << "Digite uma data válida" << endl;
    }
    else
    {
      this->data = data;
    }
  }
  void setColocacao(int colocacao)
  {
    if (colocacao < 0)
    {
      cout << "Digite uma colocação válida" << endl;
    }
    else
    {
      this->colocacao = colocacao;
    }
  }
  void setPontos(float pontos)
  {
    if (pontos < 0)
    {
      cout << "Digite pontos válidos!" << endl;
    }
    else
    {
      this->pontos = pontos;
    }
  }
  void ler();
  void imprimir();
};

void Participacao::ler()
{
  cout << "Ler - Participação - Competição" << endl;
  int sI;
  string sS;
  float sF;
  cout << "Digite o id:" << endl;
  cin >> sI;
  setId(sI);
  atleta.ler();
  modalidade.ler();
  cout << "Digite a data:" << endl;
  cin.ignore();
  getline(cin, sS);
  setData(sS);
  cout << "Digite a colocação:" << endl;
  cin >> sI;
  setColocacao(sI);
  cout << "Digite os pontos:" << endl;
  cin >> sF;
  setPontos(sF);
}

void Participacao::imprimir()
{
  cout << "Imprimir - Participação - Competição " << endl;
  cout << "ID:" << getId() << endl;
  atleta.imprimir();
  modalidade.imprimir();
  cout << "Data:" << getData() << endl;
  cout << "Colocação:" << getColocacao() << endl;
  cout << "Pontos:" << getPontos() << endl;
}