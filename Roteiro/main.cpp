#include <iostream>
#include "Data.h"
#include "Invoice.h"
#include "Empregado.h"
#include "Pessoa.h"
#include "Despesa.h"
#include "Pagamento.h"
#include "ControleDePagamentos.h"
#include "ControleDeGastos.h"
#include <string>
using namespace std;

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

    //Utilizando Função Set
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

int main()
{
    while(true) principal();

    return 0;
}
