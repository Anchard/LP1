#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice{
    private:
        int numero;
        string descricao;
        int quantidade;
        float preco;

    public:
        //construtor
        Invoice(int numero, string desc, int qtde, float preco){
            if(qtde < 0) qtde = 0;
            if (preco < 0) preco = 0;

            this->numero = numero;
            this->descricao = desc;
            this->quantidade = qtde;
            this->preco = preco;
        }

        //sets
        void setNumero(int numero);
        void setDescricao(string desc);
        void setQuantidade(int qtde);
        void setPreco(float preco);

        //gets
        int getNumero();
        string getDescricao();
        int getQuantidade();
        float getPreco();

        //interface
        float getInvoiceAmount();
        void show();
};

#endif // INVOICE_H
