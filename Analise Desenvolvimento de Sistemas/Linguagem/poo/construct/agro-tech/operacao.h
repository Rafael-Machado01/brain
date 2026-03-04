class Operacao {
  private:
    int id;
    int propriedade;
    int operador;
    string data;
    int maquina;
    float tempo;
    float consumo;
  
  public:
    Operacao();
    Operacao(int,int,int,string,int,float,float);
    void imprimir();
    void ler();

    int getId() {return this->id;}
    int getPropriedade() {return this->propriedade;}
    int getOperador() {return this->operador;}
    string getData() {return this->data;}
    int getMaquina() {return this->maquina;}
    float getTempo() {return this->tempo;}
    float getConsumo() {return this->consumo;}

    void setId(int id) {
      if(id <= 0) {
        cout << "Digite um ID válido." << endl;
      }else {
        this->id = id;
      }
    }
    void setPropriedade(int propriedade){
      if(propriedade <= 0) {
        cout << "Digite uma propiedade válida." << endl;
      }else {
        this->propiedade = propriedade;
      }
    }
    void setOperador(int operador) {
      if(operador <= 0) {
        cout << "Digite um operador válido." << endl;
      }else {
        this->operador = operador;
      }
    }
    void setData(string data) {
      if(data == "") {
        cout << "Digite um data válida." << endl;
      }else {
        this->data = data;
      }
    }
    void setMaquina(int maquina) {
      if(maquina <= 0) {
        cout << "Digite uma máquina válida" << endl;
      }else {
        this->maquina = maquina;
      }
    }
    void setTempo(float tempo) {
      if(tempo <= 0) {
        cout << "Digite um tempo válido." << endl;
      }else {
        this->tempo = tempo;
      }
    }
    void setConsumo(float consumo) {
      if(consumo <= 0) {
        cout << "Digite um consumo válido." << endl; 
      }else {
        this->consumo = consumo;
      }
    }
};


Operacao::Operacao() {
  setId(1);
  setPropriedade(1);
  setOperador(1);
  setData("Valor padrão");
  setMaquina(1);
  setTempo(1.0);
  setConsumo(1.0);
}

Operacao::Operacao(int id,int propriedade, int operador, string data,int maquina,float tempo,float consumo) {
  setId(id);
  setPropriedade(propiedade);
  setOperador(operador);
  setData(data);
  setMaquina(maquina);
  setTempo(tempo);
  setConsumo(consumo);
}

void Operacao::imprimir(){
  cout << "Sistema AgroTech - Operação" << endl;
  cout << "ID: " << getId() << endl;
  cout << "Propiedade: " << getPropriedade() << endl;
  cout << "Operador: " << getOperador() << endl;
  cout << "Data: " << getData() << endl;
  cout << "Máquina: " << getMaquina() << endl;
  cout << "Tempo: " << getTempo() << endl;
  cout << "Consumo: " << getConsumo() << endl;
}

void Operacao::ler(){
  int swapId=0,swapPropiedade=0,swapOperador=0,swapMaquina=0;
  string swapData;
  float swapTempo=0.0,swapConsumo=0.0;

  cout << "Digite o ID: " << endl;
  cin >> swapId;
  setId(swapId);

  cout << "Digite a Propriedade: " << endl;
  cin >> swapPropiedade;
  setPropriedade(swapPropiedade);

  cout << "Digite o Operador: " << endl;
  cin >> swapOperador;
  setOperador(swapOperador);

  cout << "Digite a Data: " << endl;
  cin.ignore();
  getline(cin,swapData);
  setData(swapData);

  cout << "Digite a Máquina: " << endl;
  cin >> swapMaquina;
  setMaquina(swapMaquina);

  cout << "Digite o Tempo: " << endl;
  cin >> swapTempo;
  setTempo(swapTempo);

  cout << "Digite o Consumo: " << endl;
  cin >> swapConsumo;
  setConsumo(swapConsumo);
}
