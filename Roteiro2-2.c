#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void preencherBanda();
void printaBanda();
void menu();
void funcaoRanking();
void estilomusica();
void nomebanda();

    int x=0;
    struct banda {
        char nome[30];
        char estilo[10];
        int numero_integrantes;
        int ranking;
        };

    typedef struct banda Bandas;




    Bandas vetBandas[4];

    void main(void){

    menu();

    }


  void funcaoRanking(){


      int ranking_teclado=0;
      register int y=0;
      printf("\n DIGITE UM NUMERO NO RANKING DE 1 A 5 : \n"); scanf("%d", &ranking_teclado);

        for(y=0;y<5;y++){
            if(vetBandas[y].ranking == ranking_teclado){
                printf("Registro %d:\n", y+1);
                printf("\nNome: %s\n", vetBandas[y].nome);
                printf("\estilo: %s\n", vetBandas[y].estilo);
                printf("\nNumero de integrantes: %d\n", vetBandas[y].numero_integrantes);
                printf("\Ranking: %d\n", vetBandas[y].ranking);

            }
        }
    }

    void estilomusica(){
        char estilo_teclado[10];
        register int y=0;

        printf("\n DIGITE UM ESTILO DE MUSICA: \n"); scanf("%s", &estilo_teclado);

        for(y=0;y<5;y++){
            if(strcmp(vetBandas[y].estilo, estilo_teclado)==0){
                printf("Registro %d:\n", y+1);
                printf("\nNome: %s\n", vetBandas[y].nome);
                printf("\estilo: %s\n", vetBandas[y].estilo);
                printf("\nNumero de integrantes: %d\n", vetBandas[y].numero_integrantes);
                    printf("\Ranking: %d\n", vetBandas[y].ranking);

            }
        }


    }


    void nomebanda(){
        char nomebanda[10];
        register int y=0;
        int indicador=0;

        printf("\n DIGITE UM NOME DA BANDA AQUAL DESEJA CONSULTAR: \n"); scanf("%s", &nomebanda);

        for(y=0;y<5;y++){
            if(strcmp(vetBandas[y].nome, nomebanda)==0){
            printf("ESSA BANDA ESTA ENTRE SUAS FAVORITAS\n");
                indicador=1;
            }
        }

        if (indicador==0){
            printf("ESSA BANDA NAO ESTA ENTRE SUAS FAVORITAS\n");
        }


    }


    void preencherBanda(){
        int x=0;

        for(x=0;x<5;x++){
            printf("Registro %d:", x+1);
            printf("\nNome: ");  scanf("%s", &vetBandas[x].nome);
            printf("\estilo: ");  scanf("%s", &vetBandas[x].estilo);
            printf("\nNumero de integrantes: ");   scanf("%d", &vetBandas[x].numero_integrantes);
                printf("\Ranking: ");  scanf("%d", &vetBandas[x].ranking);
        }
    }


    void printaBanda(){
        int x=0;

        for(x=0;x<5;x++){
                printf("Registro %d:\n", x+1);
                printf("\nNome: %s\n", vetBandas[x].nome);
                printf("\estilo: %s\n", vetBandas[x].estilo);
                printf("\nNumero de integrantes: %d\n", vetBandas[x].numero_integrantes);
                printf("\Ranking: %d\n", vetBandas[x].ranking);

        }
    }

    void menu(){
        int escolha=0;
            do{
            printf("\n ------------- MENU ------------- ");
            printf("\n 1- PREENCHER BANDAS");
            printf("\n 2- IMPRIMIR BANDAS");
            printf("\n 3- BUSCA POR RANKING");
            printf("\n 4- BUSCA POR ESTILO");
            printf("\n 5- BUSCA POR NOME");
            printf("\n 0- SAIR\n\n\n");
            scanf("%d", &escolha);
            switch(escolha){
                case 1: preencherBanda();
                    break;
                case 2: printaBanda();
                    break;
                case 3: funcaoRanking();
                    break;
                case 4: estilomusica();
                    break;
                case 5: nomebanda();
                    break;
            }
        }while(escolha!=0);
    }
