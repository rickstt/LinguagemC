#include <stdio.h>
#include <stdlib.h>
void main(){
    int destino, trecho;
    printf("Infome o destino conforme tabela a seguir: \n");
    printf("1-Região Norte \t 3-Região Centro-Oeste\n");
    printf("2-Região Nordeste \t 4-Região Sul\n");
    scanf("%d", &destino);

    printf("Informe o trecho: <1-IDA ou 2-IDA E VOLTA>");
    scanf("%d", &trecho);

    if(destino == 1){
        if (trecho == 1)
            printf("Região norte[IDA] = 500,00");
        else
            printf("Região norte[IDA E VOLTA] = 900,00");
    }
    else if (destino == 2){
        if (trecho == 1)
            printf("Região nordeste[IDA] = 350,00");
        else    
            printf("Regiao nordeste[IDA E VOLTA] = 650,00");
    }
    else if (destino == 3){
        if (trecho == 1)
            printf("Região centro-oeste[IDA] = 350,00");
        else    
            printf("Regiao centro-oeste[IDA E VOLTA] = 600,00");
    }
    else {
        if (trecho == 1)
            printf("Região sul[IDA] = 300,00");
        else
            printf("Região sul [IDA E VOLTA] = 550,00");
    }


}