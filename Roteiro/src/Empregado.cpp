#include "Empregado.h"
#include <iostream>

void Empregado::setNome(string nome){
    this->nome = nome;
}

void Empregado::setSobrenome(string sobrenome){
    this->sobrenome = sobrenome;
}

void Empregado::setSalario(float salario){
    this->salario = salario;
}

string Empregado::getNome(){
    return this->nome;
}

string Empregado::getSobrenome(){
    return this->sobrenome;
}

float Empregado::getSalario(){
    return this->salario;
}

float Empregado::getSalarioAnual(){
    float aumento;
    cout << "Digite o valor do aumento (0.10 // 0.25 // ...): ";
    cin >> aumento;
    cout << "\n";

    return (this->salario * 13) + (salario * aumento/100 * 13);
}

void Empregado::show(){
    cout << "Nome: " << this->nome << endl;
    cout << "Sobrenome: " << this->sobrenome << endl;
    cout << "Salario: " << this->salario << endl;
    cout <<"\n";
}
