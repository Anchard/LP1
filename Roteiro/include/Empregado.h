#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

using namespace std;


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


#endif // EMPREGADO_H
