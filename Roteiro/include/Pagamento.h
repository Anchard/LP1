#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;

class Pagamento{
    private:
        double valorPagamento;
        string nomeDoFuncionario;

    public:
        Pagamento(double valorPagamento, string nomeDoFuncionario){
            this->valorPagamento = valorPagamento;
            this->nomeDoFuncionario = nomeDoFuncionario;
        }

        Pagamento(){
            this->valorPagamento = 0;
            this->nomeDoFuncionario = "-1";
        }

        void setValorPagamento(double pagamento);
        void setNomeDoFuncionario(string nome);

        double getValorPagamento();
        string getNomeDoFuncionario();
};


#endif // PAGAMENTO_H
