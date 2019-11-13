#ifndef DATA_H
#define DATA_H
#include <iostream>
using namespace std;



class Data{

    int tratamentoDia(int dia, int lim){
    while(dia < 1 || dia > lim){
        cout << "Digite um dia valido!\n";
        cout << "Dia -- dd: ";
        cin >> dia;
        cout << "\n";
    }

    return dia;
    }

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

#endif // DATA_H
