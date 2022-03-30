/*Programa para fazer a divisão e mostrar o resto para o usuário*/

//Biblioteca standard de entrada e saida
#include <stdio.h>

//Função main para dar o start dos códigos
int main() 
{
    int x, y, total, resto;              //Declaração das vars. necessárias
    printf("Digite o Divisor:\n");      //Instrução na tela para o usuário
    scanf("%d", &x);                   //Armazenar as informações digitadas pelo usuário

    printf ("Digite o Dividendo:\n");    //Instrução na tela para o usuário
    scanf("%d", &y);                    //Armazenar as informações digitadas pelo usuário

    //A seguir os calculos definindo a função das variaveis
    total = (x / y);
    resto = (x % y);

    printf("O total da operação é: %d\n", total);   //Instrução na tela para o usuário
    printf("O resto da operação é: %d\n", resto);   //Instrução na tela para o usuário

    return 0;
}//fim