#include "Pagamento.h"

void Pagamento::setValorPagamento(double pagamento){
    this->valorPagamento = pagamento;
}

void Pagamento::setNomeDoFuncionario(string nome){
    this->nomeDoFuncionario = nome;
}

double Pagamento::getValorPagamento(){
    return this->valorPagamento;
}

string Pagamento::getNomeDoFuncionario(){
    return this->nomeDoFuncionario;
}

