/*Programa para verificar a aptidão do canditado*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char nome[30];
    int idade, alimentado, resfriado;
    float peso;
    printf("Informe o nome:");
    scanf("%s", &nome);
    printf("Informe o peso:");
    scanf("%f", &peso);
    printf("Informe a idade:");
    scanf("%d", &idade);
    printf("Está bem alimentado? <1 - SIM / 0 - NÃO>");
    scanf("%d", &alimentado);
    printf("Está resfriado? <1 - SIM / 0 - NÃO>");
    scanf("%d", &resfriado);

    if(peso >= 50 && (idade >= 16 && idade<= 69)
        && alimentado && !resfriado)
        printf("O voluntário %s está apto!", nome);
    
    else
        printf("O voluntário %s NÃO está apto", nome);
}