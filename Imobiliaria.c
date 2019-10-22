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
    int vagas_garagem;
    float val_condominio;
}tApartamento;

typedef struct terreno{
    char *titulo;
    int area_terreno;
}tTerreno;

//Funções
void cadastra(){
    char string[100], string2[100];
    int opcao;

    printf("Escolha o tipo de Imovel:\n"
           "1. Casa\n"
           "2. Apartamento\n"
           "3. Terreno\n\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    printf("\n");

    switch(opcao){
        case 1:
            fflush(stdin);
            tCasa novaCasa;

            printf("> Titulo\n"
                   "> Numero de Pavimentos\n"
                   "> Numero de Quartos\n"
                   "> Area do Terreno\n"
                   "> Area Construida\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            scanf("%[^\n]s", &string);
            novaCasa.titulo = string;

            scanf("%d %d %d %d", &novaCasa.nmr_pavimentos, &novaCasa.nmr_quartos,
                  &novaCasa.area_terreno, &novaCasa.area_construida);

            printf("Dados Inseridos:\n\nTitulo: %s\nNumero de Pavimentos: %d\nNumero de Quartos: %d\n"
                   "Area do Terreno: %d m\nArea Construida: %d m\n", novaCasa.titulo, novaCasa.nmr_pavimentos,
                   novaCasa.nmr_quartos, novaCasa.area_terreno, novaCasa.area_construida);

            break;

        case 2:
            fflush(stdin);
            tApartamento novoApartamento;

            printf("> Titulo\n"
                   "> Posicao\n"
                   "> Area\n"
                   "> Numero de Quartos\n"
                   "> Andar\n"
                   "> Valor do Codominio\n"
                   "> Quantidade de Vagas na Garagem\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            scanf("%[^\n]s", &string);
            novoApartamento.titulo = string;
            fflush(stdin);


            scanf("%[^\n]s", &string2);
            novoApartamento.posicao = string2;
            fflush(stdin);

            scanf("%d", &novoApartamento.area);
            scanf("%d", &novoApartamento.nmr_quartos);
            scanf("%d", &novoApartamento.andar);
            scanf("%f", &novoApartamento.val_condominio);
            scanf("%d", &novoApartamento.vagas_garagem);

            printf("\nDados Inseridos:\n\nTitulo: %s\nPosicao: %s\nArea: %d m\nNumero de Quartos: %d\n"
                   "Andar: %d\nValor do Condominio: R$ %.2f\nQuantidade de Vagas na Garagem: %d\n\n",
                    novoApartamento.titulo, novoApartamento.posicao, novoApartamento.area, novoApartamento.nmr_quartos,
                    novoApartamento.andar, novoApartamento.val_condominio, novoApartamento.vagas_garagem);

            break;

        case 3:
            fflush(stdin);
            tTerreno novoTerreno;

            printf("> Titulo\n> Area do Terreno\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            scanf("%[^\n]s", &string);
            novoTerreno.titulo = string;
            fflush(stdin);

            scanf("%d", &novoTerreno.area_terreno);

            printf("Titulo: %s\nArea do Terreno: %d m\n\n", novoTerreno.titulo, novoTerreno.area_terreno);

            break;

        default :
            printf ("Valor invalido!\n");

    }
}

int principal(){
    int opcao, flag = 1;

    printf("Qual operacao efetuar?\n\n"
           "1. Cadastro de Imoveis\n"
           "2. Consultar todos os Imoveis\n"
           "3. Busca de Imoveis\n"
           "4. Editar informacoes de imoveis\n"
           "5. Consultar todos os Imoveis por Tipo\n"
           "6. Carregar Dados\n"
           "7. Salvar Dados\n"
           "8. Sair\n\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    printf("\n");

    switch(opcao){
        case 1:
            cadastra();
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
