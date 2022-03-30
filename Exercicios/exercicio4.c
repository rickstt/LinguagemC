/*Programa para informar o nome digitado pelo usuário,
desta vez com um código diferente do scanf. Vamos usar o fgets
e a biblioteca stdin*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    char produto[30];
    printf("Informe o nome do produto: \n");
    /*Vamos usar o fgets para capturar a tecla que está sendo 
    digitada, diferente do scanf, o fgets pega apenas chars.*/
    fgets(produto, 30, stdin);

    printf("Produto: %s \n", produto);
}