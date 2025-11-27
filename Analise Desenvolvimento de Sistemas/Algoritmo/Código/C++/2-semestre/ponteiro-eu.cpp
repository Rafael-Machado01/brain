// Faça um vetor com struct que armazene informações de Alunos. (Preciso do endereço de mémoria de cada dado.) - Faça uma query bem detalhada.
// Nome Faltas Notas Status(passou ou não media alta de 8.50)
#include <iostream>
using namespace std;
#define T 5

struct amostra{
    string nome;
    int faltas;
    float notaSem01;
    float notaSem02;
    bool status;
};

amostra v[T];
string *pnome=0;
int *pfaltas=0;
float *pnota1=0,*pnota2=0;
bool *pstatus=0;


int main() {
    // Data
    for(int i=0; i<T; i++) {
        cout << "Digite o nome do Aluno: " << endl;
        cin >> v[i].nome;
        cout << "Digite as faltas cometidas por " << v[i].nome << " : " << endl;
        cin >> v[i].faltas;
        cout << "Digite a nota do primeiro semestre de " << v[i].nome << " : " << endl;
        cin >> v[i].notaSem01;
        cout << "Digite a nota do segundo semestre de " << v[i].nome << " : " << endl;
        cin >> v[i].notaSem02;
        if((v[i].notaSem01 + v[i].notaSem02) / 2 >= 8.50) {
            v[i].status = true;
        }else {
            v[i].status = false;
        }
   }
    // Query
    for(int i=0; i<T;i++) {
        pnome = &v[i].nome;
        pfaltas = &v[i].faltas;
        pnota1 = &v[i].notaSem01;
        pnota2 = &v[i].notaSem02;
        pstatus = &v[i].status;
        cout << "O aluno " << *pnome << "Endereço do nome na memória é" << pnome << endl;
        cout << "O aluno " << *pnome << " tem " << *pfaltas << " faltas" << endl;
        cout << "A nota do primeiro semestre de " << *pnome << " é " << *pnota1 << "Endereço da nota do primeiro semestre na memória é" << pnota1 << endl;
        cout << "A nota do segundo semestre de " << *pnome << " é " << *pnota2 << "Endereço da nota do segundo semestre na memória é" << pnota2 << endl;
        cout << "O aluno" << *pnome << " " <<  (v[i].status ? "Passou" : "Não passou") << "Endereço do status na memória é" << pstatus << endl;
    }
}
