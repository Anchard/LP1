#include "Despesa.h"

void Despesa::setValor(double valor){
    this->valor = valor;
}

void Despesa::setTipoDeGastos(double tipoDeGastos){
    this->tipoDeGastos = tipoDeGastos;
}

double Despesa::getValor(){
    return this->valor;
}

int Despesa::getTipoDeGastos(){
    return this->tipoDeGastos;
}

