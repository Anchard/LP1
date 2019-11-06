//imports
#include <iostream>
#include <string>

using namespace std;

//classes
class Data{
    private:
        int mes;
        int dia;
        int ano;

    public:
        //construtor
        Data(int mes, int dia, int ano){
            this->mes = mes;
            this->dia = dia;
            this->ano = ano;
        }

        //sets
        void setMes(int mes);
        void setDia(int dia);
        void setAno(int ano);

        //gets
        int getMes();
        int getDia();
        int getAno();

        //interfaces
        void avancarDia();
};

class Invoice{
    private:
        int numero;
        string descricao;
        int quantidade;
        float preco;

    public:
        //construtor
        Invoice(int numero, string desc, int qtde, float preco){
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
};

//funcoes Data
void Data::setMes(int mes){
    this->mes = mes;
}

void Data::setDia(int dia){
    this->dia = dia;
}

void Data::setAno(int ano){
    this->ano = ano;
}

int Data::getMes(){
    return this->mes;
}
int Data::getDia(){
    return this->dia;
}

int Data::getAno(){
    return this->ano;
}

void Data::avancarDia(){
    this->dia++;
}

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


//main
int main (){
    int mes, dia, ano;
    int numero, quantidade;
    string descricao;
    float preco;

    cout << "Digite:\n> Mes\n> Dia\n> Ano\n\n";
    cin >> mes >> dia >> ano;
    cout << endl;

    Data primeiraData(mes, dia, ano);
    primeiraData.avancarDia();

    cout << primeiraData.getMes() << endl;
    primeiraData.setDia(1);
    cout << primeiraData.getDia() << endl;
    cout << primeiraData.getAno() << endl;

    cout << "Digite:\n> Numero\n> Descricao\n> Quantidade\n> Preco\n\n";
    cin >> numero;
    fflush(stdin);
    getline(cin, descricao);
    cin >> quantidade >> preco;

    cout << endl;

    Invoice primeiroInvoice(numero, descricao, quantidade, preco);
    cout << primeiroInvoice.getNumero() << endl;
    cout << primeiroInvoice.getDescricao() << endl;
    cout << primeiroInvoice.getQuantidade() << endl;
    cout << primeiroInvoice.getPreco() << endl;
    cout << primeiroInvoice.getInvoiceAmount() << endl;

    return 0;
}
