#include <iostream>
using namespace std;

class produto{
  public:

  // Atributes
  int id;
  string descricao;
  float quantidade;
  float valor;
  
  // Methods
  void read() {
    cout << "blabla";
  }
}

int main() {
  produto prod1;

  prod1.ler();
}