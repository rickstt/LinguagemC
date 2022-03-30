/*Programa para executar 4 operações matemáticas*/

//Biblioteca standard de entrada e saida
#include <stdio.h>

//Função main para dar o start dos códigos
int main() 
{
    float x, y, soma, subtracao, multiplicacao, divisao;    //Declaração das vars. necessárias
    printf("Digite o primeiro valor a ser calculado:\n");  //Instrução na tela para o usuário
    scanf("%f", &x);                                      //Armazenar as informações digitadas pelo usuário

    printf("Digite o segundo valor a ser calculado:\n"); //Instrução na tela para o usuário
    scanf("%f", &y);                                    //Armazenar as informações digitadas pelo usuário

    //A seguir os calculos definindo a função das variaveis
    soma = (x + y);
    subtracao = (x - y);
    multiplicacao = (x * y);
    divisao = (x / y);

    printf("O resultado dos cálculos é:\n");        //Instrução na tela para o usuário
    printf("Soma = %.2f\n", soma);                  //Instrução na tela para o usuário
    printf("Subtração = %.2f\n", subtracao);        //Instrução na tela para o usuário
    printf("Multiplicação = %.2f\n", multiplicacao);//Instrução na tela para o usuário
    printf("Divisão = %.2f\n", divisao);            //Instrução na tela para o usuário

    return 0;
}//fim