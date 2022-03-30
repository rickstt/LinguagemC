/*Programa para escrever na tela o nome que o
usuário digitou sem espaços!*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char produto[30];
    printf("Informe o nome do produto: \n");
    scanf("%s", &produto);

    printf("Produto: %s \n", produto);
}