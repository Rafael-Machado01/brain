class Viagem {
  private:
  // Atributes
      int id;
      string descricao;
      int tipoComb;
      float kmSaida;
      float kmChegada;

  public: 
  // Methods
  // Metodos com mesmo nome porem com formas diferentes como o primeiro sem argumento e o segundo com argumentos.'
  Viagem();
  Viagem(int,string,int,float,float); 
  void imprimir();
};
Viagem::Viagem() {
  this->id = 0;
  this->descricao = "";
  this->tipoComb = 0;
  this->kmSaida = 0;
  this->kmChegada = 0;
}

Viagem::Viagem(int id,string descricao,int tipoComb,float kmSaida,float kmChegazda){
  this->id = id;
  this->descricao = descricao;
  this->tipoComb = tipoComb;
  this->kmSaida = kmSaida;
  this->kmChegada = kmChegada;
}

void Viagem::imprimir() {
  cout << "Imprimir Viagem" << endl;
  cout << "ID: " << this->id << endl;
  cout << "Descrição: " << this->descricao << endl;
  cout << "Tipo de combustivel: " << this->tipoComb << endl;
  cout << "Km (Saída): " << this->kmSaida << endl;
  cout << "Km (Chegada): " << this->kmChegada << endl;
}

