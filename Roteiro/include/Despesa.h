#ifndef DESPESA_H
#define DESPESA_H


class Despesa{
    private:
        double valor;
        int tipoDeGastos;

    public:
        Despesa(double valor, int tipoDeGastos){
            this->valor = valor;
            this->tipoDeGastos = tipoDeGastos;
        }

        Despesa(){
            this->valor = 0;
            this->tipoDeGastos = -1;
        }

        void setValor(double valor);
        void setTipoDeGastos(double tipoDeGastos);

        double getValor();
        int getTipoDeGastos();
};

#endif // DESPESA_H
