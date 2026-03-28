void lerFuncionario(Funcionario &func)
{
  int sId, sCargo;
  string sNome, sNCargo;
  float sSalario;
  cout << "Ler - Funcionário" << endl;
  cout << "Digite o ID:" << endl;
  cin >> sId;
  func.setId(sId);

  cout << "Digite o Nome " << endl;
  cin.ignore();
  getline(cin, sNome);
  func.setNome(sNome);

  cout << "Digite o id cargo:" << endl;
  cin >> sCargo;
  func.Cargo::setId(sCargo);

  cout << "Digite o Nome do cargo" << endl;
  cin >> sNCargo;
  func.Cargo::setCargo(sNCargo);

  cout << "Digite o Salário" << endl;
  cin >> sSalario;
  func.setSalario(sSalario);
}

void imprimirFuncionario()
{
  cout << "Imprimir - Funcionário" << endl;
  cout << "ID:" << func.getId() << endl;
  cout << "Nome:" << func.getNome() << endl;
  cout << "Cargo: " << func.Cargo::getId() << " - " << func.Cargo::getCargo() << endl;
  cout << "Salário:" << func.getSalario() << endl;
}