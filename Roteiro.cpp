//imports
#include <iostream>
#include <string>

using namespace std;

//funcao auxiliar p/ classes
int tratamentoDia(int dia, int lim){
    while(dia < 1 || dia > lim){
        cout << "Digite um dia valido!\n";
        cout << "Dia -- dd: ";
        cin >> dia;
        cout << "\n";
    }

    return dia;
}

//classes
class Data{
    private:
        int mes;
        int dia;
        int ano;

    public:
        //construtor
        Data(int dia, int mes, int ano){

            while(mes < 1 || mes > 12){
                cout << "Digite um mes valido!\n";
                cout << "Mes -- mm: ";
                cin >> mes;
                cout << "\n";
            }

            if(mes == 1) dia = tratamentoDia(dia, 31);
            else if(mes == 2) dia = tratamentoDia(dia, 28);
            else if(mes == 3) dia = tratamentoDia(dia, 31);
            else if(mes == 4) dia = tratamentoDia(dia, 30);
            else if(mes == 5) dia = tratamentoDia(dia, 31);
            else if(mes == 6) dia = tratamentoDia(dia, 30);
            else if(mes == 7) dia = tratamentoDia(dia, 31);
            else if(mes == 8) dia = tratamentoDia(dia, 31);
            else if(mes == 9) dia = tratamentoDia(dia, 30);
            else if(mes == 10) dia = tratamentoDia(dia, 31);
            else if(mes == 11) dia = tratamentoDia(dia, 30);
            else if(mes == 12) dia = tratamentoDia(dia, 31);

            while(ano < 1900 || ano > 2019){
                cout << "Digite um ano valido!\n";
                cout << "Ano -- aaaa: ";
                cin >> ano;
                cout << "\n";
            }

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

class Empregado{
    private:
        string nome;
        string sobrenome;
        float salario;

    public:
        Empregado(string nome, string sobrenome, float salario){
            this->nome = nome;
            this->sobrenome = sobrenome;
            this->salario = salario;
        }

        void setNome(string nome);
        void setSobrenome(string sobrenome);
        void setSalario(float salario);

        string getNome();
        string getSobrenome();
        float getSalario();

        float getSalarioAnual(int aumento);

};

class Pessoa{
    private:
        string nome;
        int idade;
        string telefone;

    public:
        Pessoa(string nome){
            this->nome = nome;
        }

        Pessoa(string nome, int idade, string telefone){
            this->nome = nome;
            this->idade = idade;
            this->telefone = telefone;
        }

        void setNome(string nome);
        void setIdade(int idade);
        void setTelefone(string telefone);

        string getNome();
        int getIdade();
        string getTelefone();
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

//funcoes Empregado
void Empregado::setNome(string nome){
    this->nome = nome;
}

void Empregado::setSobrenome(string sobrenome){
    this->sobrenome = sobrenome;
}

void Empregado::setSalario(float salario){
    this->salario = salario;
}

string Empregado::getNome(){
    return this->nome;
}

string Empregado::getSobrenome(){
    return this->sobrenome;
}

float Empregado::getSalario(){
    return this->salario;
}

float Empregado::getSalarioAnual(int aumento){
    return (this->salario * 13) + (salario * aumento/100 * 13);
}

//funcoes Pessoa
void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

string Pessoa::getNome(){
    return this->nome;
}

int Pessoa::getIdade(){
    return this->idade;
}

string Pessoa::getTelefone(){
    return this->telefone;
}
//funcoes main
void testaData(){
    Data d(30, -1, 2000);
    cout << d.getDia() << endl;
    cout << d.getMes() << endl;
    cout << d.getAno() << endl;
}
void principal(){
    int opc;
    cout << "Digite a opcao desejada:\n1. Data\n2. Invoice\n3. Empregado\n4. Pessoa\n\n";
    cout << "Opcao: ";
    cin >> opc;
    cout << "\n";

    switch(opc){
        case 1:
            testaData();
            break;

        case 2:
            //testaInvoice();
            break;

        case 3:
            //testaEmpregado();
            break;

        case 4:
            //testaPessoa();
            break;
    }
}

//main
int main (){

    principal();

    return 0;
}
