class Aluno {
  private: 
   // Atributes 
    int ra;
      string nome;
        string curso;
          float nota1;
            float nota2;
  public: 
  // Methodes
  void ler();
  void imprimir();
  void media();
  // Getters
  int getRa() {return this->ra;}
  string getNome() {return this->nome;}
  string getCurso() {return this->curso;}
  float getNota1() {return this->nota1;}
  float getNota2() {return this->nota2;}

  // Setters
  void setRa(int ra) {this->ra = ra;}
  void setNome(string nome) {this->nome = nome;}
  void setCurso(string curso) {this->curso = curso;}
  void setNota1(float nota1) {this->nota1 = nota1;}
  void setNota2(float nota2) {this->nota2 = nota2;}

};

void Aluno::ler() {
  int swapInt;
    float swapFloat;
      string swapString;

  cout << "Digite o RA do aluno " << endl;
  cin >> swapInt;
  setRa(swapInt);

  cout << "Digite o nome do aluno " << endl;
  cin.ignore();
  getline(cin,swapString);
  setNome(swapString);

  cout << "Digite o curso do aluno" << endl;
  cin.ignore();
  getline(cin,curso);
  setCurso(swapString);

  cout << "Digite a nota do primeiro semestre " << endl;
  cin >> swapFloat;
  setNota1(swapFloat);

  cout << "Digite a nota do segundo semestre " << endl;
  cin >> swapFloat;
  setNota2(swapFloat);
 }

 void Aluno::imprimir(){
  cout << "Consulta de alunos" << endl;
  cout << "RA: " << getRa() << endl;
  cout << "Nome: " << getNome() << endl;
  cout << "Cursa: " << getCurso() << endl;
  cout << "Nota primeiro semestre: " << getNota1() << endl;
  cout << "Nota segundo semestre: " << getNota2() << endl;
 } 

 void Aluno::media() {
  cout << "O aluno " << getNome() << endl;
  float average = (getNota1() + getNota2()) / 2;
  if(average >= 7 ) {
    cout << "Passou com a média de " << average << endl;
  }else if(average <= 5) {
    cout << "Poderá fazer o exame. Média: " << average << endl;
  }else {
    cout << "Reprovado. Média: " << average << endl;
  }

 }
