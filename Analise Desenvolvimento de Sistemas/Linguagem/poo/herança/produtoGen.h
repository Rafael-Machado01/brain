class ProdutoGen: Categoria {
  private:
    int id;
    string descricao;
    float qtde;
    float valor;
  public:
  ProdutoGen() : id(0), descricao(""), qtde(0), valor(0), Categoria() {}
  ProdutoGen(int id,string descricao, float qtde, float valor,Categoria cat):
    id(id), descricao(descricao), qtde(qtde), valor(valor), Categoria(cat)
  void imprimir();

};

void ProdutoGen::imprimir() {
  cout << "ID: " << this->id << endl;
  cout << "Descrição: " << this->descricao << endl;
  cout << "Categoria ID: " << Categoria::getId() << endl;
  cout << "Categoria Descricão: " << Categoria::getDesc() << endl; 
  cout << "Quantidade: " << this->qtde << endl;
  cout << "Valor: " << this->valor << endl;
}
