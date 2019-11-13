#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include <Pagamento.h>


class ControleDePagamentos{
    private:
        Pagamento pagamentos[10];

    public:
        void setPagamentos(Pagamento p, int pos);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string nome);
        void showAll();
};


#endif // CONTROLEDEPAGAMENTOS_H
