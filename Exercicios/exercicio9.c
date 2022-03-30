/*Programa que vai pegar 10 números digitados pelo usuário,
e vai calcular a média dos valores*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    float num, soma=0, media=0;
    int i;

    /*Laço de repetição para o usuário poder digitar os 10 números*/
    for(i=1 ; i <= 10 ; i++){
        printf("Informe o número:");
        scanf("%f", &num);
        soma += num;
    }

    /*Calculo da média FORA do sistema de repetição*/
    media = soma / 10;
    printf("A media é: %f", media);
}