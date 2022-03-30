/*Programa que pede ao usuário que
digite seu nome, ao fazer será alocado
na váriavel nome*/

#include <stdio.h>
int main(){
    char nome[40];
    printf("Digite seu nome, e ENTER:\n");
    scanf("%s", nome);

    printf("%s\n", nome);

    return 0;
}