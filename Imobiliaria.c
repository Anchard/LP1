/** Casa Pequena terreno 200 area 90
    Casa Média  terreno 400 area 290
    Casa Grande terreno 700 area 590
*/

#include <stdio.h>

//tipos
typedef struct casa{
    char titulo[100];
    int nmr_pavimentos;
    int nmr_quartos;
    int area_terreno;
    int area_construida;
}tCasa;

typedef struct apartamento{
    char titulo[100];
    char posicao[100];
    int area;
    int nmr_quartos;
    int andar;
    int vagas_garagem;
    float val_condominio;
}tApartamento;

typedef struct terreno{
    char titulo[100];
    int area_terreno;
}tTerreno;

//Controle
int ncasas = 0, napes = 0, nterrenos = 0;

//Funções
void cadastra(tCasa *casas, tApartamento *apes, tTerreno *terrenos){
    int tam = 100;
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

            printf("> Titulo\n"
                   "> Numero de Pavimentos\n"
                   "> Numero de Quartos\n"
                   "> Area do Terreno\n"
                   "> Area Construida\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            fflush(stdin);
            scanf("%[^\n]s", &casas[ncasas].titulo);
            fflush(stdin);

            scanf("%d %d %d %d", &casas[ncasas].nmr_pavimentos, &casas[ncasas].nmr_quartos,
                  &casas[ncasas].area_terreno, &casas[ncasas].area_construida);

            printf("\nDados Inseridos:\n\nTitulo: %s\nNumero de Pavimentos: %d\nNumero de Quartos: %d\n"
                   "Area do Terreno: %d m2\nArea Construida: %d m2\n\n", casas[ncasas].titulo, casas[ncasas].nmr_pavimentos,
                   casas[ncasas].nmr_quartos, casas[ncasas].area_terreno, casas[ncasas].area_construida);

            ncasas++;

            break;

        case 2:
            fflush(stdin);

            printf("> Titulo\n"
                   "> Posicao\n"
                   "> Area\n"
                   "> Numero de Quartos\n"
                   "> Andar\n"
                   "> Valor do Codominio\n"
                   "> Quantidade de Vagas na Garagem\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            fflush(stdin);
            scanf("%[^\n]s", &apes[napes].titulo);
            fflush(stdin);


            scanf("%[^\n]s", &apes[napes].posicao);
            fflush(stdin);

            scanf("%d", &apes[napes].area);
            scanf("%d", &apes[napes].nmr_quartos);
            scanf("%d", &apes[napes].andar);
            scanf("%f", &apes[napes].val_condominio);
            scanf("%d", &apes[napes].vagas_garagem);

            printf("\n\nDados Inseridos:\n\nTitulo: %s\nPosicao: %s\nArea: %d m2\nNumero de Quartos: %d\n"
                   "Andar: %d\nValor do Condominio: R$ %.2f\nQuantidade de Vagas na Garagem: %d\n\n",
                    apes[napes].titulo, apes[napes].posicao, apes[napes].area, apes[napes].nmr_quartos,
                    apes[napes].andar, apes[napes].val_condominio, apes[napes].vagas_garagem);

            napes++;

            break;

        case 3:
            fflush(stdin);

            printf("> Titulo\n> Area do Terreno\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            fflush(stdin);
            scanf("%[^\n]s", &terrenos[nterrenos]);
            fflush(stdin);

            scanf("%d", &terrenos[nterrenos].area_terreno);

            printf("\nTitulo: %s\nArea do Terreno: %d m2\n\n", terrenos[nterrenos].titulo, terrenos[nterrenos].area_terreno);

            nterrenos++;

            break;

        default :
            printf ("Valor invalido!\n");

    }
}

void consulta(tCasa *casas, tApartamento *apes, tTerreno *terrenos){
    int i;

    for(i = 0; i < ncasas; i++){
        printf("\n@CASA@ID %d@\n\nTitulo: %s\nNumero de Pavimentos: %d\nNumero de Quartos: %d\n"
                   "Area do Terreno: %d m2\nArea Construida: %d m2\n\n", i, casas[i].titulo, casas[i].nmr_pavimentos,
                   casas[i].nmr_quartos, casas[i].area_terreno, casas[i].area_construida);
    }

    for(i = 0; i < napes; i++){
        printf("\n\n@APARTAMENTO@ID %d@\n\nTitulo: %s\nPosicao: %s\nArea: %d m2\nNumero de Quartos: %d\n"
                   "Andar: %d\nValor do Condominio: R$ %.2f\nQuantidade de Vagas na Garagem: %d\n\n", i,
                    apes[i].titulo, apes[i].posicao, apes[i].area, apes[i].nmr_quartos,
                    apes[i].andar, apes[i].val_condominio, apes[i].vagas_garagem);
    }

    for(i = 0; i < nterrenos; i++)
        printf("\n@TERRENO@ID %d@\nTitulo: %s\nArea do Terreno: %d m2\n\n", i, terrenos[i].titulo, terrenos[i].area_terreno);

}

int principal(tCasa *casas, tApartamento *apes, tTerreno *terrenos){
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
            cadastra(casas, apes, terrenos);
            break;

        case 2:
            consulta(casas, apes, terrenos);
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
    int tam = 100, flag = 1;

    tCasa casas[tam];
    tApartamento apes[tam];
    tTerreno terrenos[tam];

    while(flag){
        flag = principal(casas, apes, terrenos);
    }

    printf("Encerrando...\nObrigado pela utilizacao!\n");

    return 0;
}
