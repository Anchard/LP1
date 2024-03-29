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
        int arrMes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

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
        void show();
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

class Empregado{
    private:
        string nome;
        string sobrenome;
        float salario;

    public:
        Empregado(string nome, string sobrenome, float salario){
            if(salario < 0) salario = 0;

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

        float getSalarioAnual();
        void show();

};

class Pessoa{
    private:
        string nome;
        int idade;
        string telefone;

    public:
        Pessoa(string nome){
            this->nome = nome;
            this->idade = -1;
            this->telefone = "-1";
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

        void show();
};

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

class ControleDeGastos{
    private:
        Despesa despesas[10];

    public:
        void setDespesa(Despesa d, int pos);
        double calculaTotalDespesas();
        bool existeDispesaDoTipo(int tipo);
        void showAll();
};

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

class ControleDePagamentos{
    private:
        Pagamento pagamentos[10];

    public:
        void setPagamentos(Pagamento p, int pos);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string nome);
        void showAll();
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
    if((this->dia + 1) > this->arrMes[this->mes]){
        this->dia = 1;

        if((this->mes + 1) > 12){
            this->mes = 1;
            this->ano++;
        }

        else this->mes++;
    }

    else this->dia++;
}

void Data::show(){
    cout << "Dia: " << this->dia << endl;
    cout << "Mes: " << this->mes << endl;
    cout << "Ano: " << this->ano << endl;
    cout <<"\n";
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

void Invoice::show(){
    cout << "Numero: " << this->numero << endl;
    cout << "Descricacao: " << this->descricao << endl;
    cout << "Quantidade: " << this->quantidade << endl;
    cout << "Preco: " << this->preco << endl;
    cout << "Total: " << this->getInvoiceAmount() << endl;
    cout <<"\n";
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

float Empregado::getSalarioAnual(){
    float aumento;
    cout << "Digite o valor do aumento (0.10 // 0.25 // ...): ";
    cin >> aumento;
    cout << "\n";

    return (this->salario * 13) + (salario * aumento/100 * 13);
}

void Empregado::show(){
    cout << "Nome: " << this->nome << endl;
    cout << "Sobrenome: " << this->sobrenome << endl;
    cout << "Salario: " << this->salario << endl;
    cout <<"\n";
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

void Pessoa::show(){
    cout << "Nome: " << this->nome << endl;
    cout << "Idade: " << this->idade << endl;
    cout << "Telefone: " << this->telefone << endl;
    cout <<"\n";
}

//funcoes Despesa
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

//funcoes ControleDeGastos
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

//funcoes Pagamento
void Pagamento::setValorPagamento(double pagamento){
    this->valorPagamento = pagamento;
}

void Pagamento::setNomeDoFuncionario(string nome){
    this->nomeDoFuncionario = nome;
}

double Pagamento::getValorPagamento(){
    return this->valorPagamento;
}

string Pagamento::getNomeDoFuncionario(){
    return this->nomeDoFuncionario;
}

//funcoes ControleDePagamentos
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

//funcoes main
void testaData(){
    //Incrementa dia
    Data d1(5, 3, 2000);
    d1.avancarDia();
    d1.show();

    //Incrementa mes
    Data d2(31, 1, 2000);
    d2.avancarDia();
    d2.show();

    //Incrementa ano
    Data d3(31, 12, 2000);
    d3.avancarDia();
    d3.show();

    //Mes, dia e ano invalidos
    Data d4(0, 0, 0);
    d4.show();

    //Uso dos setters e getters
    Data d5(10, 10, 1900);
    d5.setDia(7);
    d5.setMes(7);
    d5.setAno(2004);

    cout << "Dia: " << d5.getDia() << endl;
    cout << "Mes: " << d5.getMes() << endl;
    cout << "Ano: " << d5.getAno() << endl;
    cout <<"\n";

}

void testaInvoice(){
    //std
    Invoice i1(1, "Computador educacional", 12, 3000);
    i1.show();

    //Quantidade e preco < 0
    Invoice i2(2, "Telefone celular bug 404", -5, -3);
    i2.show();

    //Uso dos setters e getters
    Invoice i3(0, "00000000000000", 0, 0);
    i3.setNumero(3);
    i3.setDescricao("Microondas maneirissimo");
    i3.setQuantidade(4);
    i3.setPreco(232.54);

    cout << "Numero: " << i3.getNumero() << endl;
    cout << "Descricacao: " << i3.getDescricao() << endl;
    cout << "Quantidade: " << i3.getQuantidade() << endl;
    cout << "Preco: " << i3.getPreco() << endl;
    cout << "Total: " << i3.getInvoiceAmount() << endl;
    cout <<"\n";
}

void testaEmpregado(){
    float anual;

    //std
    Empregado e1("Joao", "Pereira", 1300.54);
    e1.show();

    //sal < 0
    Empregado e2("Carlos", "Maciel", -5200.32);
    e2.show();

    //getSalarioAnual()
    Empregado e3("Luiz", "Henrique", 2050.42);
    anual = e3.getSalarioAnual();
    e3.show();
    cout << "Anual: " << anual << "\n\n";

    //Setters e Getters e getSalarioAnual()
    Empregado e4("0000000", "000000", 0);
    e4.setNome("Paulo");
    e4.setSobrenome("Matheus");
    e4.setSalario(4200.12);
    anual = e4.getSalarioAnual();

    cout << "Nome: " << e4.getNome() << endl;
    cout << "Sobrenome: " << e4.getSobrenome() << endl;
    cout << "Salario: " << e4.getSalario() << endl;
    cout <<"\n";
    cout << "Anual: " << anual << "\n";
}

void testaPessoa(){
    //p1(name)
    Pessoa p1("Lucas Fernandes da Silva");
    p1.show();

    //std
    Pessoa p2("Thathiane Fernandes Macedo de Carvalho", 22, "(83) 9 8724-3061");
    p2.show();

    //Setters e Getters
    Pessoa p3("000000000");
    p3.setNome("Carlinhos Vieira");
    p3.setIdade(14);
    p3.setTelefone("(82) 9 9455-6274");

    cout << "Nome: " << p3.getNome() << endl;
    cout << "Idade: " << p3.getIdade() << endl;
    cout << "Telefone: " << p3.getTelefone() << endl;
    cout <<"\n";
}

void testaControleDeGastos(){
    ControleDeGastos c1;
    Despesa d1(3500.12, 1);
    Despesa d2(1000, 2);
    Despesa d3(1700.98, 2);


    c1.setDespesa(d1, 0);
    c1.setDespesa(d2, 2);
    c1.setDespesa(d3, 4);

    //Mostrando todas as despesas
    c1.showAll();

    //Total acumulado
    c1.calculaTotalDespesas();

    //Despesas por Tipos
    c1.existeDispesaDoTipo(0);
    c1.existeDispesaDoTipo(1);
    c1.existeDispesaDoTipo(2);
    c1.existeDispesaDoTipo(3);
}

void testaControleDePagamentos(){
    Pagamento p1(3250.74, "Roberto Carlos");
    Pagamento p2(5380.20, "Carlos Roberto");
    Pagamento p3(2000, "Julio Cesar");
    ControleDePagamentos c1;

    //Utilizando Fun��o Set
    c1.setPagamentos(p1, 0);
    c1.setPagamentos(p2, 3);
    c1.setPagamentos(p3, 9);

    //Mostrando Dandos Inseridos
    c1.showAll();

    //Mostrando valor Total
    c1.calculaTotalDePagamentos();

    //Procurando Pagamentos por funcionario
    c1.existePagamentoParaFuncionario("Carlos Roberto");
    c1.existePagamentoParaFuncionario("Julio Cesar");
    c1.existePagamentoParaFuncionario("Cesar Julio");
}

void principal(){
    int opc;
    cout << "Digite a opcao desejada:\n\n1. Data\n2. Invoice\n3. Empregado\n4. Pessoa\n5. Controle de Gastos\n6. Controle de Pagamentos\n7. Sair\n\n";
    cout << "Opcao: ";
    cin >> opc;
    cout << "\n";

    switch(opc){
        case 1:
            testaData();
            break;

        case 2:
            testaInvoice();
            break;

        case 3:
            testaEmpregado();
            break;

        case 4:
            testaPessoa();
            break;

        case 5:
            testaControleDeGastos();
            break;

        case 6:
            testaControleDePagamentos();
            break;

        case 7:
            cout << "Obrigado por utilizar o programa!\n";
            return;

        default:
            cout << "Escolha uma opcao valida!\n" << endl;
            break;
    }
}

//main
int main (){

    while(true) principal();

    return 0;
}
