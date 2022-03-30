/*Programa para somar e calcular números digitados pelo usuário*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int soma, num1, num2;
    printf("Informe o primeiro número :\n");
    scanf("%d", &num1);
    printf("Digite o segundo número:\n");
    scanf("%d", &num2);

    soma = (num1 + num2);
    printf("A soma da sua operação é: %d\n", soma);
    
}