/** Casa Pequena terreno 200 area 90
    Casa M�dia  terreno 400 area 290
    Casa Grande terreno 700 area 590
*/

//Includes
#include <stdio.h>
#include <string.h>

//Tipos
typedef struct negocios{
    char titulo[100];
    int aluga;
    int vende;
    float preco;
}tNegocios;

typedef struct endereco{
    char cidade[100];
    char rua[100];
    char cep[10];
    char bairro[100];
    int nmr;
}tEndereco;

typedef struct casa{
    int nmr_pavimentos;
    int nmr_quartos;
    float area_terreno;
    float area_construida;
    tNegocios negocios;
    tEndereco endereco;

}tCasa;

typedef struct apartamento{
    char posicao[100];
    int nmr_quartos;
    int andar;
    int vagas_garagem;
    float area;
    float val_condominio;
    tNegocios negocios;
    tEndereco endereco;
}tApartamento;

typedef struct terreno{
    float area_terreno;
    tNegocios negocios;
    tEndereco endereco;
}tTerreno;

//Controle
int ncasas = 0, napes = 0, nterrenos = 0;

//Fun��es
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

            printf("> Titulo\n"
                   "> Cidade\n"
                   "> Bairro\n"
                   "> Rua\n"
                   "> CEP\n"
                   "> Numero\n"
                   "> Numero de Pavimentos\n"
                   "> Numero de Quartos\n"
                   "> Area do Terreno\n"
                   "> Area Construida\n"
                   "> Aluga? Sim: 1 Nao: 0\n"
                   "> Vende? Sim: 1 Nao: 0\n"
                   "> Preco do Imovel\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            fflush(stdin);
            scanf("%[^\n]s", &casas[ncasas].negocios.titulo);

            fflush(stdin);
            scanf("%[^\n]s", &casas[ncasas].endereco.cidade);

            fflush(stdin);
            scanf("%[^\n]s", &casas[ncasas].endereco.bairro);

            fflush(stdin);
            scanf("%[^\n]s", &casas[ncasas].endereco.rua);

            fflush(stdin);
            scanf("%[^\n]s", &casas[ncasas].endereco.cep);

            scanf("%d", &casas[ncasas].endereco.nmr);
            scanf("%d", &casas[ncasas].nmr_pavimentos);
            scanf("%d", &casas[ncasas].nmr_quartos);
            scanf("%f", &casas[ncasas].area_terreno);
            scanf("%f", &casas[ncasas].area_construida);
            scanf("%d", &casas[ncasas].negocios.aluga);
            scanf("%d", &casas[ncasas].negocios.vende);
            scanf("%f", &casas[ncasas].negocios.preco);

            printf("\nDados Inseridos:\n\nTitulo: %s\n", casas[ncasas].negocios.titulo);
            printf("Cidade: %s\n", casas[ncasas].endereco.cidade);
            printf("Bairro: %s\n", casas[ncasas].endereco.bairro);
            printf("Rua: %s\n", casas[ncasas].endereco.cidade);
            printf("CEP: %s\n", casas[ncasas].endereco.cep);
            printf("Numero: %d\n", casas[ncasas].endereco.nmr);
            printf("Numero de Pavimentos: %d\n", casas[ncasas].nmr_pavimentos);
            printf("Numero de Quartos: %d\n", casas[ncasas].nmr_quartos);
            printf("Area do Terreno: %.2f m2\n", casas[ncasas].area_terreno);
            printf("Area Construida: %.2f m2\n", casas[ncasas].area_construida);
            printf("Aluga: %d\n", casas[ncasas].negocios.aluga);
            printf("Vende: %d\n", casas[ncasas].negocios.vende);
            printf("Preco: R$%.2f\n\n", casas[ncasas].negocios.preco);

            ncasas++;

            break;

        case 2:

            printf("> Titulo\n"
                   "> Posicao\n"
                   "> Cidade\n"
                   "> Bairro\n"
                   "> Rua\n"
                   "> CEP\n"
                   "> Numero\n"
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
            scanf("%[^\n]s", &apes[napes].negocios.titulo);

            fflush(stdin);
            scanf("%[^\n]s", &apes[napes].posicao);

            fflush(stdin);
            scanf("%[^\n]s", &apes[napes].endereco.cidade);

            fflush(stdin);
            scanf("%[^\n]s", &apes[napes].endereco.bairro);

            fflush(stdin);
            scanf("%[^\n]s", &apes[napes].endereco.rua);

            fflush(stdin);
            scanf("%[^\n]s", &apes[napes].endereco.cep);

            scanf("%d", &apes[napes].endereco.nmr);
            scanf("%f", &apes[napes].area);
            scanf("%d", &apes[napes].nmr_quartos);
            scanf("%d", &apes[napes].andar);
            scanf("%f", &apes[napes].val_condominio);
            scanf("%d", &apes[napes].vagas_garagem);
            scanf("%d", &apes[napes].negocios.aluga);
            scanf("%d", &apes[napes].negocios.vende);
            scanf("%f", &apes[napes].negocios.preco);

            printf("\nDados Inseridos:\n\nTitulo: %s\n", apes[napes].negocios.titulo);
            printf("Posicao: %s\n", apes[napes].posicao);
            printf("Cidade: %s\n", apes[napes].endereco.cidade);
            printf("Bairro: %s\n", apes[napes].endereco.bairro);
            printf("Rua: %s\n", apes[napes].endereco.cidade);
            printf("CEP: %s\n", apes[napes].endereco.cep);
            printf("Numero: %d\n", apes[napes].endereco.nmr);
            printf("Area: %.2f\n m2", apes[napes].area);
            printf("Numero de Quartos: %d\n", apes[napes].nmr_quartos);
            printf("Andar: %d\n", apes[napes].andar);
            printf("Valor do Condominio: R$ %.2f\n", &apes[napes].val_condominio);
            printf("Vagas na Garagem: %d\n", apes[napes].vagas_garagem);
            printf("Aluga: %d\n", apes[napes].negocios.aluga);
            printf("Vende: %d\n", apes[napes].negocios.vende);
            printf("Preco: R$ %.2f\n\n", apes[napes].negocios.preco);

            napes++;

            break;

        case 3:

            printf("> Titulo\n"
                   "> Cidade\n"
                   "> Bairro\n"
                   "> Rua\n"
                   "> CEP\n"
                   "> Numero\n"
                   "> Area do Terreno\n"
                   "> Aluga? Sim: 1 Nao: 0\n"
                   "> Vende? Sim: 1 Nao: 0\n"
                   "> Preco do Imovel\n\n");

            printf("Insira as informacoes abaixo:\n\n");

            fflush(stdin);
            scanf("%[^\n]s", &terrenos[nterrenos].negocios.titulo);

            fflush(stdin);
            scanf("%[^\n]s", &terrenos[nterrenos].endereco.cidade);

            fflush(stdin);
            scanf("%[^\n]s", &terrenos[nterrenos].endereco.bairro);

            fflush(stdin);
            scanf("%[^\n]s", &terrenos[nterrenos].endereco.rua);

            fflush(stdin);
            scanf("%[^\n]s", &terrenos[nterrenos].endereco.cep);

            scanf("%d", &terrenos[nterrenos].endereco.nmr);
            scanf("%f", &terrenos[nterrenos].area_terreno);
            scanf("%d", &terrenos[nterrenos].negocios.aluga);
            scanf("%d", &terrenos[nterrenos].negocios.vende);
            scanf("%f", &terrenos[nterrenos].negocios.preco);

            printf("Titulo: %s\n", terrenos[nterrenos].negocios.titulo);
            printf("Cidade: %s\n", terrenos[nterrenos].endereco.cidade);
            printf("Bairro: %s\n", terrenos[nterrenos].endereco.bairro);
            printf("Rua: %s\n", terrenos[nterrenos].endereco.rua);
            printf("CEP: %s\n", terrenos[nterrenos].endereco.cep);
            printf("Numero: %d\n", terrenos[nterrenos].endereco.nmr);
            printf("Area do Terreno: %.2f m2\n", terrenos[nterrenos].area_terreno);
            printf("Aluga: %d\n", terrenos[nterrenos].negocios.aluga);
            printf("Vende: %d\n", terrenos[nterrenos].negocios.vende);
            printf("Preco: %.2f\n\n", terrenos[nterrenos].negocios.preco);

            nterrenos++;

            break;

        default :
            printf ("Valor invalido!\n");

    }
}

void consulta(tCasa *casas, tApartamento *apes, tTerreno *terrenos){
    int i;

    for(i = 0; i < ncasas; i++){
        printf("\n@CASAS@ID %d@\n\nTitulo: %s\n", i, casas[i].negocios.titulo);
        printf("Cidade: %s\n", casas[i].endereco.cidade);
        printf("Bairro: %s\n", casas[i].endereco.bairro);
        printf("Rua: %s\n", casas[i].endereco.cidade);
        printf("CEP: %s\n", casas[i].endereco.cep);
        printf("Numero: %d\n", casas[i].endereco.nmr);
        printf("Numero de Pavimentos: %d\n", casas[i].nmr_pavimentos);
        printf("Numero de Quartos: %d\n", casas[i].nmr_quartos);
        printf("Area do Terreno: %.2f m2\n", casas[i].area_terreno);
        printf("Area Construida: %.2f m2\n", casas[i].area_construida);
        printf("Aluga: %d\n", casas[i].negocios.aluga);
        printf("Vende: %d\n", casas[i].negocios.vende);
        printf("Preco: R$ %.2f\n\n", casas[i].negocios.preco);
    }

    for(i = 0; i < napes; i++){
        printf("\n@APARTAMENTOS@ID %d@\n\nTitulo: %s\n", i, apes[i].negocios.titulo);
        printf("Posicao: %s\n", apes[i].posicao);
        printf("Cidade: %s\n", apes[i].endereco.cidade);
        printf("Bairro: %s\n", apes[i].endereco.bairro);
        printf("Rua: %s\n", apes[i].endereco.cidade);
        printf("CEP: %s\n", apes[i].endereco.cep);
        printf("Numero: %d\n", apes[i].endereco.nmr);
        printf("Area: %.2f\n m2", apes[i].area);
        printf("Numero de Quartos: %d\n", apes[i].nmr_quartos);
        printf("Andar: %d\n", apes[i].andar);
        printf("Valor do Condominio: R$ %.2f\n", &apes[i].val_condominio);
        printf("Vagas na Garagem: %d\n", apes[i].vagas_garagem);
        printf("Aluga: %d\n", apes[i].negocios.aluga);
        printf("Vende: %d\n", apes[i].negocios.vende);
        printf("Preco: %.2f\n\n", apes[i].negocios.preco);
    }

    for(i = 0; i < nterrenos; i++){
        printf("@TERRENOS@ID %d@\n\nTitulo: %s\n", i, terrenos[i].negocios.titulo);
        printf("Cidade: %s\n", terrenos[i].endereco.cidade);
        printf("Bairro: %s\n", terrenos[i].endereco.bairro);
        printf("Rua: %s\n", terrenos[i].endereco.rua);
        printf("CEP: %s\n", terrenos[i].endereco.cep);
        printf("Numero: %d\n", terrenos[i].endereco.nmr);
        printf("Area do Terreno: %.2f\n m2", terrenos[i].area_terreno);
        printf("Aluga: %d\n", terrenos[i].negocios.aluga);
        printf("Vende: %d\n", terrenos[i].negocios.vende);
        printf("Preco: R$ %.2f\n\n", terrenos[i].negocios.preco);
    }
}

void busca(tCasa *casas, tApartamento *apes, tTerreno *terrenos){
    int opcao;

    printf("Como deseja efetuar a busca?\n\n"
           "1. Busca por Titulo\n"
           "2. Busca por Bairro\n"
           "3. Busca acima de um determinado valor\n"
           "4. Busca de Imoveis para Alugar\n"
           "5. Busca de Imoveis para Vender\n\n");

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        float value;
        char word[100], i;

        case 1:
            printf("\nEscreva o titulo desejado: ");

            fflush(stdin);
            scanf("%[^\n]s", &word);
            printf("\n");

            for(i = 0; i < ncasas; i++){
                if(strcmp(casas[i].negocios.titulo, word) == 0)
                    printf("@CASAS@ID %d@: %s\n", i, casas[i].negocios.titulo);
            }

            for(i = 0; i < napes; i++){
                if(strcmp(apes[i].negocios.titulo, word) == 0)
                    printf("@APARTAMENTOS@ID %d@: %s\n", i, apes[i].negocios.titulo);
            }

            for(i = 0; i < nterrenos; i++){
                if(strcmp(terrenos[i].negocios.titulo, word) == 0)
                    printf("@TERRENOS@ID %d@: %s\n", i, terrenos[i].negocios.titulo);
            }

            printf("\n");
            break;

        case 2:
            printf("\nEscreva o Bairro Desejado: ");

            fflush(stdin);
            scanf("%[^\n]s", &word);
            printf("\n");

            for(i = 0; i < ncasas; i++){
                if(strcmp(casas[i].endereco.bairro, word) == 0)
                    printf("@CASAS@ID %d@: %s\n", i, casas[i].endereco.bairro);
            }

            for(i = 0; i < napes; i++){
                if(strcmp(apes[i].endereco.bairro, word) == 0)
                    printf("@APARTAMENTOS@ID %d@: %s\n", i, apes[i].endereco.bairro);
            }

            for(i = 0; i < nterrenos; i++){
                if(strcmp(terrenos[i].endereco.bairro, word) == 0)
                    printf("@TERRENOS@ID %d@: %s\n", i, terrenos[i].endereco.bairro);
            }

            printf("\n");
            break;

        case 3:
            printf("\nEscreva o valor desejado: ");

            scanf("%f", &value);
            printf("\n");

            for(i = 0; i < ncasas; i++){
                if(casas[i].negocios.preco > value)
                    printf("@CASAS@ID %d@: R$ %.2f\n", i, casas[i].negocios.preco);
            }

            for(i = 0; i < napes; i++){
                if(apes[i].negocios.preco > value)
                    printf("@APARTAMENTOS@ID %d@: R$ %.2f\n", i, apes[i].negocios.preco);
            }

            for(i = 0; i < nterrenos; i++){
                if(terrenos[i].negocios.preco > value)
                    printf("@TERRENOS@ID %d@: R$ %.2f\n", i, terrenos[i].negocios.preco);
            }

            printf("\n");
            break;

        case 4:

            for(i = 0; i < ncasas; i++){
                if(casas[i].negocios.aluga > 0)
                    printf("@CASAS@ID %d@: Disponivel para Aluguel\n", i);
            }

            for(i = 0; i < napes; i++){
                if(apes[i].negocios.aluga > 0)
                    printf("@APARTAMENTOS@ID %d@: Disponivel para Aluguel\n", i);
            }

            for(i = 0; i < nterrenos; i++){
                if(terrenos[i].negocios.aluga > 0)
                    printf("@TERRENOS@ID %d@: Disponivel para Aluguel\n", i);
            }

            printf("\n");
            break;

        case 5:

            for(i = 0; i < ncasas; i++){
                if(casas[i].negocios.vende > 0)
                    printf("@CASAS@ID %d@: Disponivel para Venda\n", i);
            }

            for(i = 0; i < napes; i++){
                if(apes[i].negocios.vende > 0)
                    printf("@APARTAMENTOS@ID %d@: Disponivel para Venda\n", i);
            }

            for(i = 0; i < nterrenos; i++){
                if(terrenos[i].negocios.vende > 0)
                    printf("@TERRENOS@ID %d@: Disponivel para Venda\n", i);
            }

            printf("\n");
            break;

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
            busca(casas, apes, terrenos);
            break;

        case 4:
            //remove();
            break;

        case 5:
            //edita();
            break;

        case 6:
            //salva();
            break;

        case 7:
            //carrega();
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
