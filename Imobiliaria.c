/** Casa Pequena terreno 200 area 90
    Casa Média  terreno 400 area 290
    Casa Grande terreno 700 area 590
*/

#include <stdio.h>

//tipos
typedef struct casa{
    char *titulo;
    int nmr_pavimentos;
    int nmr_quartos;
    int area_terreno;
    int area_construida;
}tCasa;

typedef struct apartamento{
    char *titulo;
    char *posicao;
    int area;
    int nmr_quartos;
    int andar;
    int val_condominio;
    int vagas_garagem;
}tApartamento;

typedef struct terreno{
    char *titulo;
    int area_terreno;
}tTerreno;

//Funções
int principal(){
    int opcao, flag = 1;

    printf("Qual operacao efetuar?\n"
           "01. Cadastro de Imoveis\n"
           "02. Consultar todos os Imoveis\n"
           "03. Busca de Imoveis\n"
           "04. Editar informacoes de imoveis\n"
           "05. Consultar todos os Imoveis por Tipo\n"
           "06. Carregar Dados\n"
           "07. Salvar Dados\n"
           "08. Sair\n");

    switch(opcao){
        case 1:
            //cadastra();
            break;

        case 2:
            //consulta();
            break;

        case 3:
            //busca();
            break;

        case 4:
            //edita();
            break;

        case 5:
            //consulta_tipo();
            break;

        case 6:
            //carrega();
            break;

        case 7:
            //salva();
            break;

        case 8:
            flag = 0;
            break;

        default :
            printf ("Valor invalido!\n");
    }

    return flag;
}


//Main
int main(){

    principal();

    return 0;
}
