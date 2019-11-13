#include "ControleDeGastos.h"
#include <iostream>

using namespace std;

void ControleDeGastos::setDespesa(Despesa d, int pos){
    this->despesas[pos].setValor(d.getValor());
    this->despesas[pos].setTipoDeGastos(d.getTipoDeGastos());
}

void ControleDeGastos::showAll(){
    for(int i = 0; i < 10; i++){
        cout << "Tipo de Gasto: " << this->despesas[i].getTipoDeGastos() << endl;
        cout << "Valor: " << this->despesas[i].getValor() << endl;
    }

    cout << endl;
}

double ControleDeGastos::calculaTotalDespesas(){
    double sum = 0;

    for(int i = 0; i < 10; i++) sum += this->despesas[i].getValor();

    cout << "Total: " << sum << endl;
    cout << endl;
}

bool ControleDeGastos::existeDispesaDoTipo(int tipo){
    for(int i = 0; i < 10; i++){
        if(this->despesas[i].getTipoDeGastos() == tipo){
            cout << "Existe Dispesa desse Tipo!" << endl;
            return true;
        }
    }

    cout << "Nao Existe Dispesa desse Tipo!" << endl << endl;
    return false;
}

