#include "Data.h"

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
