/** Casa Pequena terreno 200 area 90
    Casa Média  terreno 400 area 290
    Casa Grande terreno 700 area 590
*/

#include <stdio.h>

//tipos
typedef struct casa{
    char titulo[100];
    char logradouro[100];
    int nmr_pavimentos;
    int nmr_quartos;
    int area_terreno;
    int area_construida;
    int aluga;
    int vende;
    float preco;
}tCasa;

typedef struct apartamento{
    char titulo[100];
    char posicao[100];
    char logradouro[100];
    int area;
    int nmr_quartos;
    int andar;
    int vagas_garagem;
    int aluga;
    int vende;
    float val_condominio;
    float preco;
}tApartamento;

typedef struct terreno{
    char titulo[100];
    char logradouro[100];
    int area_terreno;
    int aluga;
    int vende;
    float preco;
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
                   "> Logradouro\n"
                   "> Numero de Pavimentos\n"
                   "> Numero de Quartos\n"
                   "> Area do Terreno\n"
                   "> Area Construida\n"
                   "> Aluga? Sim: 1 Nao: 0\n"
                   "> Vende? Sim: 1 Nao: 0\n"
                   "> Preco do Imovel\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            fflush(stdin);
            scanf("%[^\n]s", &casas[ncasas].titulo);
            fflush(stdin);

            fflush(stdin);
            scanf("%[^\n]s", &casas[ncasas].logradouro);
            fflush(stdin);

            scanf("%d %d %d %d %d %d", &casas[ncasas].nmr_pavimentos, &casas[ncasas].nmr_quartos,
                  &casas[ncasas].area_terreno, &casas[ncasas].area_construida, &casas[ncasas].aluga, &casas[ncasas].vende);

            scanf("%f", &casas[ncasas].preco);

            printf("\nDados Inseridos:\n\nTitulo: %s\nLogadouro: %s\nNumero de Pavimentos: %d\nNumero de Quartos: %d\n"
                   "Area do Terreno: %d m2\nArea Construida: %d m2\nAluga: %d\nVende: %d\nPreco: R$ %.2f\n\n", casas[ncasas].titulo,
                   casas[ncasas].logradouro, casas[ncasas].nmr_pavimentos, casas[ncasas].nmr_quartos,
                   casas[ncasas].area_terreno, casas[ncasas].area_construida, casas[ncasas].aluga,
                   casas[ncasas].vende,casas[ncasas].preco);

            ncasas++;

            break;

        case 2:
            fflush(stdin);

            printf("> Titulo\n"
                   "> Posicao\n"
                   "> Logradouro\n"
                   "> Area\n"
                   "> Numero de Quartos\n"
                   "> Andar\n"
                   "> Valor do Codominio\n"
                   "> Quantidade de Vagas na Garagem\n"
                   "> Aluga? Sim: 1 Nao: 0\n"
                   "> Vende? Sim: 1 Nao: 0\n"
                   "> Preco do Imovel\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            fflush(stdin);
            scanf("%[^\n]s", &apes[napes].titulo);
            fflush(stdin);


            scanf("%[^\n]s", &apes[napes].posicao);
            fflush(stdin);

            scanf("%[^\n]s", &apes[napes].logradouro);
            fflush(stdin);

            scanf("%d", &apes[napes].area);
            scanf("%d", &apes[napes].nmr_quartos);
            scanf("%d", &apes[napes].andar);
            scanf("%f", &apes[napes].val_condominio);
            scanf("%d", &apes[napes].vagas_garagem);
            scanf("%d", &apes[napes].aluga);
            scanf("%d", &apes[napes].vende);
            scanf("%f", &apes[napes].preco);

            printf("\n\nDados Inseridos:\n\nTitulo: %s\nPosicao: %s\nLogradouro: %s\nArea: %d m2\nNumero de Quartos: %d\n"
                   "Andar: %d\nValor do Condominio: R$ %.2f\nQuantidade de Vagas na Garagem: %d\nAluga: %d\nVende: %d\nPreco: R$ %.2f\n\n",
                    apes[napes].titulo, apes[napes].posicao,apes[napes].logradouro, apes[napes].area, apes[napes].nmr_quartos,
                    apes[napes].andar, apes[napes].val_condominio, apes[napes].vagas_garagem,
                    apes[napes].aluga, apes[napes].vende, apes[napes].preco);

            napes++;

            break;

        case 3:
            fflush(stdin);

            printf("> Titulo\n> Logradouro\n> Area do Terreno\n> Aluga? Sim: 1 Nao: 0\n> Vende? Sim: 1 Nao: 0\n> Preco do Imovel\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            fflush(stdin);
            scanf("%[^\n]s", &terrenos[nterrenos].titulo);
            fflush(stdin);

            fflush(stdin);
            scanf("%[^\n]s", &terrenos[nterrenos].logradouro);
            fflush(stdin);

            scanf("%d", &terrenos[nterrenos].area_terreno);
            scanf("%d", &terrenos[nterrenos].aluga);
            scanf("%d", &terrenos[nterrenos].vende);
            scanf("%f", &terrenos[nterrenos].preco);

            printf("\nTitulo: %s\nLogradouro: %s\nArea do Terreno: %d m2\nAluga: %d\nVende: %d\nPreco: R$ %.2f\n\n", terrenos[nterrenos].titulo,
                   terrenos[nterrenos].logradouro, terrenos[nterrenos].area_terreno, terrenos[nterrenos].aluga,
                   terrenos[nterrenos].vende, terrenos[nterrenos].preco);

            nterrenos++;

            break;

        default :
            printf ("Valor invalido!\n");

    }
}

void consulta(tCasa *casas, tApartamento *apes, tTerreno *terrenos){
    int i;

    for(i = 0; i < ncasas; i++){
        printf("\n@CASA@ID %d@\n\nTitulo: %s\nLogadouro: %s\nNumero de Pavimentos: %d\nNumero de Quartos: %d\n"
                   "Area do Terreno: %d m2\nArea Construida: %d m2\nAluga: %d\nVende: %d\nPreco: R$ %.2f\n\n", i, casas[i].titulo, casas[i].logradouro,
                   casas[i].nmr_pavimentos, casas[i].nmr_quartos, casas[i].area_terreno,
                   casas[i].area_construida, casas[i].aluga, casas[i].vende, casas[i].preco);
    }

    for(i = 0; i < napes; i++){
        printf("\n@APARTAMENTO@ID %d@\n\nTitulo: %s\nPosicao: %s\nLogradouro: %s\nArea: %d m2\nNumero de Quartos: %d\n"
                   "Andar: %d\nValor do Condominio: R$ %.2f\nQuantidade de Vagas na Garagem: %d\nAluga: %d\nVende: %d\nPreco: R$ %.2f\n\n", i,
                    apes[i].titulo, apes[i].posicao, apes[i].logradouro, apes[i].area, apes[i].nmr_quartos,
                    apes[i].andar, apes[i].val_condominio, apes[i].vagas_garagem, apes[i].aluga, apes[i].vende, apes[i].preco);
    }

    for(i = 0; i < nterrenos; i++){
        printf("\n@TERRENOS@ID %d@\nTitulo: %s\nLogradouro: %s\nArea do Terreno: %d m2\nAluga: %d\nVende: %d\nPreco: R$ %.2f\n\n", i,
                   terrenos[i].titulo, terrenos[i].logradouro, terrenos[i].area_terreno,
                   terrenos[i].aluga, terrenos[i].vende, terrenos[i].preco);
    }


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
