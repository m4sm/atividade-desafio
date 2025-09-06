#include <stdio.h>

void main(){
    int cidade[5][7], soma[5] = {0}, maiortemp = 0, menortemp = 0;
    float mediageral = 0;

    // 1. Entrada de dados

    printf("\nDigite as temperaturas das cidades \n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 7; j++){
            printf("\nCidade %d, Temperatura %d: \n", i+1, j+1);
            scanf("%d", &cidade[i][j]);
            soma[i] += cidade[i][j];
            mediageral += cidade[i][j];

            if (maiortemp < cidade[i][j]){
                maiortemp = cidade[i][j];
            }

            if (menortemp > cidade[i][j]){
                menortemp = cidade[i][j];
            }

        }
    }

    
    printf("\n---------------------TEMPERATURAS DE CADA CIDADE: -------------------\n");
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            printf("\nCidade %d e temperatura %d: %d \n",i+1, j+1, cidade[i][j]);
        }
    }

    // 2. Temperatura Média Semanal por Cidade

    int media[5];

    for (int i = 0; i < 5; i++){
        media[i] = soma[i] / 7;
    }


    printf("\n-------------------------MEDIAS DE CADA CIDADE--------------------\n");
    for (int i = 0; i < 5; i++){
        printf("\nMedia da cidade %d: %d \n", i+1, media[i]);
    }

    //3. Dia mais quente e mais frio da semana

    printf("\n---------------DIA MAIS QUENTE E MAIS FRIO DA SEMANA----------------\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 7; j++){

        if (maiortemp == cidade[i][j]){
            printf("\nTemperatura mais quente: %d na cidade %d, no dia %d\n", maiortemp, i+1, j+1);
            }

        if (menortemp == cidade[i][j]){
            printf("\nTemperatura mais fria: %d na cidade %d, no dia %d\n", menortemp, i+1, j+1);
            }
        }
    }    

    //4. Cidades acima da média geral

    mediageral = mediageral / 35;

    printf("\n----------------------------MEDIA GERAL----------------------------------\n");
    printf("\nMedia geral das cidades: %.2f\n", mediageral);

    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 7; j++){
            if(media[i] > mediageral){
                printf("\nCidade %d tem a media semanal ACIMA da media geral. \n", i+1);
                break;
            }
        }
    }

}