/*Programa para fazer o calculo da velocidade média*/

//Biblioteca standard de entrada e saida
#include <stdio.h>

// Definir uma constante
#define KMH 3.6

//Função main para dar o start dos códigos
int main() 
{
    float dt, ds, vmedia;           //Declaração das vars. necessárias
    printf("Digite o Delta T:\n");  //Instrução na tela para o usuário
    scanf("%f", &dt);               //Armazenar as informações digitadas pelo usuário

    printf("Digite o Delta S:\n");  //Instrução na tela para o usuário
    scanf("%f", &ds);               //Armazenar as informações digitadas pelo usuário

    //A seguir os calculos definindo a função das variaveis
    vmedia = (dt / ds * KMH);

    printf("Velocidade em KM/H: %.2f\n", vmedia);   //Instrução na tela para o usuário

    return 0;
}//fim