class Bank {
  private: 
  int conta; 
  string nome;
  float saldo; 

  public: 
    void read();
    void summary();
    void transition(float valor, bool pay);
  };

void Bank::read() {
  cout << "Cadastro de clientes" << endl;
  cout << "Digite o número da conta" << endl;
  cin >> conta;
  cout << "Digite o nome do cliente" << endl;
  cin >> nome;
  cout << "Digite o saldo atual do clinte" << endl;
  cin >> saldo;
}

void Bank::summary() {
  cout << "Extrato" << endl;
  cout << "Número da conta: " << conta << endl;
  cout << "Títular da conta: " << nome << endl;
  cout << "Saldo atual: " << saldo << endl;
}

void Bank::transition(float valor,bool pay) {
  if(pay == true) {
    saldo -= valor;
  }else {
    saldo += valor;
  }
}
