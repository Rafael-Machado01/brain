class Cargo
{
protected:
  int id;
  string cargo;

public:
  Cargo() : id(0), cargo("") {};
  Cargo(int id, string cargo) : id(id), cargo(cargo) {};

  int getId() { return this->id; }
  string getCargo() { return this->cargo; }

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

  void setCargo(string cargo)
  {
    if (cargo == "")
    {
      cout << "Digite um Cargo válido!" << endl;
    }
    else
    {
      this->cargo = cargo;
    }
  }

  void imprimir()
  {
    cout << "Imprimir - Cargo" << endl;
    cout << "ID:" << getId() << endl;
    cout << "Cargo: " << getCargo() << endl;
  }
};