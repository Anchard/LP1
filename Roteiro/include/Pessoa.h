#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

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

#endif // PESSOA_H
