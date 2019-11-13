#include "Invoice.h"
#include <iostream>
//funcoes Invoice
void Invoice::setNumero(int numero){
    this->numero = numero;
}

void Invoice::setDescricao(string desc){
    this->descricao = desc;
}

void Invoice::setQuantidade(int qtde){
    this->quantidade = qtde;
}

void Invoice::setPreco(float preco){
    this->preco = preco;
}

int Invoice::getNumero(){
    return this->numero;
}

string Invoice::getDescricao(){
    return this->descricao;
}

int Invoice::getQuantidade(){
    return this->quantidade;
}

float Invoice::getPreco(){
    return this->preco;
}

float Invoice::getInvoiceAmount(){
    return this->preco * this->quantidade;
}

void Invoice::show(){
    cout << "Numero: " << this->numero << endl;
    cout << "Descricacao: " << this->descricao << endl;
    cout << "Quantidade: " << this->quantidade << endl;
    cout << "Preco: " << this->preco << endl;
    cout << "Total: " << this->getInvoiceAmount() << endl;
    cout <<"\n";
}
