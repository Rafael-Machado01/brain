class Rh {
  private:
    int id;
    string nome;
    string cargo;
    float salario;
  public: 
  setupRh();
  insertRh(int,string,string,float,);
}

Rh::setupRh() {
  this->id = 0;
  this->nome = "";
  this->cargo = "";
  this->salario = 1.512;
}

Rh::insertRh(int id,string nome,string cargo,float salario){
  this->id = id;
  this->nome = nome;
  this->cargo = cargo;
  this->salario = salario;
}