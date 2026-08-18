---
tags: [exercicio, algoritmo, codigo, struct]
disciplina: "Algoritmo"
tipo: exercicio
---

# Exercício — Struct

````
#include <iostream>
#include <cmath>
using namespace std;
#define t 10
struct dados {
int n1;
float n2;
};
dados v[t];

void read();
void sum();
void average();
void square();
int main() {
read();
sum();
average();
square();}

void read() {
for(int i=0; i < t; i++) {
cout << "Digite um número inteiro " << " : ";
cin >> v[i].n1;
cout << "Digite um número real" << " : ";
cin >> v[i].n2;}}

void sum() {
int sumi = 0;
for(int i=0; i < t; i++) {
if(v[i].n1 % 2 != 0) {
sumi += v[i].n1;}}
cout << "\n A soma entre os números inteiros e impares é "<< " : " << sumi << endl;
cout << "\n A soma entre os números inteiros e impares é "<< " : " << sumi << endl;
}

void average() {
int sun_average = 0;
for(int i=0;i < t; i++) {
sun_average += v[i].n2;}
cout << "\n A média entre os números reais é " << " : " << sun_average / t << endl;}

void square() {
for(int i=0;i < t; i++) {
if(v[i].n2 > 0) {
cout << "A raiz quadrada de " << v[i].n2 << " é " << sqrt(v[i].n2) << endl;}}}
````
