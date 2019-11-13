#include "ControleDePagamentos.h"
#include <iostream>

void ControleDePagamentos::setPagamentos(Pagamento p, int pos){
    for(int i = 0; i < 10; i++){
        this->pagamentos[pos].setNomeDoFuncionario(p.getNomeDoFuncionario());
        this->pagamentos[pos].setValorPagamento(p.getValorPagamento());
    }
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nome){
    for(int i = 0; i < 10; i++){
        if(this->pagamentos[i].getNomeDoFuncionario() == nome){
            cout << "Existe Pagamento para este Funcionario!\n";
            return true;
        }
    }
    cout << "Nao existe Pagamento para este Funcionario!\n" << endl;
    return false;
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double sum = 0;
    for(int i = 0; i < 10; i++){
        sum += this->pagamentos[i].getValorPagamento();
    }

    cout << "Total: " << sum << endl << endl;
    return sum;
}

void ControleDePagamentos::showAll(){
    for(int i = 0; i < 10; i++){
        cout << "Nome: " << this->pagamentos[i].getNomeDoFuncionario() << endl;
        cout << "Pagamento: " << this->pagamentos[i].getValorPagamento() << endl;
    }
    cout << endl;
}

