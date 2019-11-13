#include "Pessoa.h"
#include <iostream>

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

string Pessoa::getNome(){
    return this->nome;
}

int Pessoa::getIdade(){
    return this->idade;
}

string Pessoa::getTelefone(){
    return this->telefone;
}

void Pessoa::show(){
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;
    cout << "Telefone: " << this->telefone << endl;
    cout <<"\n";
}

