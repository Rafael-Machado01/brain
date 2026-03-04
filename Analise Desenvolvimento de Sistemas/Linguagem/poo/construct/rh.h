class Rh {
  private:
    int id;
    string nome;
    string cargo;
    float salario;
    float venda;
  public: 
  setupRh();
  insertRh(int,string,string,float,);
  void meta();
}

Rh::setupRh() {
  this->id = 0;
  this->nome = "";
  this->cargo = "";
  this->salario = 1.512;
  this->venda = 0;
}

Rh::insertRh(int id,string nome,string cargo,float salario,float venda){
  this->id = id;
  this->nome = nome;
  this->cargo = cargo;
  this->salario = salario;
  this->venda = venda;
}

void Rh::meta() {
  cout << "A meta do mes é " <<
}

