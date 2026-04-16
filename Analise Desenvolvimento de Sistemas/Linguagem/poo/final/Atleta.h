class Atleta : public Pais
{
private:
  int id;
  string nome;
  int idade;
  float peso;

public:
  Atleta() : id(0), nome(""), idade(18), peso(30), Pais() {};
  Atleta(int id, string nome, int idade, float peso, Pais pais) : id(id), nome(nome), idade(idade), peso(peso), Pais(pais) {};

  int getId() { return this->id; }
  string getNome() { return this->nome; }
  int getIdade() { return this->idade; }
  float getPeso() { return this->peso; }

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

  void setNome(string nome)
  {
    if (nome == "")
    {
      cout << "Digite uma descrição válida." << endl;
    }
    else
    {
      this->nome = nome;
    }
  }

  void setIdade(int idade)
  {
    if (idade < 18)
    {
      cout << "Atleta menor de idade!" << endl;
    }
    else
    {
      this->idade = idade;
    }
  }

  void setPeso(float peso)
  {
    if (peso < 1)
    {
      cout << "Digite um peso válido!" << endl;
    }
    else
    {
      this->peso = peso;
    }
  }

  void imprimir();
  void ler();
  void a5() { this->peso = peso * 1.05; };
  void sump(float peso) { this->peso += peso; };
  void per(float per) { this->peso = peso * per; };
};

void Atleta::imprimir()
{
  cout << "Imprimir - Atleta - Competição" << endl;
  cout << "ID:" << getId();
  cout << "Nome:" << getNome();
  cout << "Idade:" << getIdade();
  cout << "Peso: " << getPeso();
  cout << "ID Pais:" << Pais::getId() << endl;
  cout << "Descrição Pais:" << Pais::getDescricao() << endl;
}

void Atleta::ler()
{
  int sI;
  string sS;
  float sF;
  cout << "Ler - Atleta - Competição" << endl;
  cout << "Digite o ID:" << endl;
  cin >> sI;
  cout << "Digite o Nome: " << endl;
  cin.ignore();
  getline(cin, sS);
  setNome(sS);
  cout << "Digite a Idade:" << endl;
  cin >> sI;
  setIdade(sI);
  cout << "Digite o Peso: " << endl;
  cin >> sF;
  setPeso(sF);
}
