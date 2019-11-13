#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

class ControleDeGastos{
    private:
        Despesa despesas[10];

    public:
        void setDespesa(Despesa d, int pos);
        double calculaTotalDespesas();
        bool existeDispesaDoTipo(int tipo);
        void showAll();
};


#endif // CONTROLEDEGASTOS_H
