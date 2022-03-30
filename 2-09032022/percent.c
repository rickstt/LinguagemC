//Programa para calcular porcentagem de valores

//Biblioteca standard de entrada e saida
#include <stdio.h>

//Função main para dar o start dos códigos
int main() 
{
    float preco, desc, desctotal, valortotal;//Declaração das vars. necessárias
    printf("Digite o valor do produto:\n");  //Instrução na tela para o usuário
    scanf("%f", &preco);                     //Armazenar as informações digitadas pelo usuário

    printf("Digite o percentual de desconto:\n"); //Instrução na tela para o usuário
    scanf("%f", &desc);                           //Armazenar as informações digitadas pelo usuário


    //A seguir os calculos definindo a função das variaveis
    /*O vendedor coloca o valor do produto e o percentual de desconto
    em seguida o programa multiplica os números e divide por 100,
    seguindo as regras da matemática*/
    desctotal = (preco * desc / 100);
    /*EM seguida ele finaliza o calculo fazendo a subtração 
    dos valores e fazendo o desconto do valor final*/
    valortotal = (preco - desctotal);

    printf("A porcentagem do desconto foi de: %.2f\n", desctotal);//Instrução na tela para o usuário
    printf("O novo valor do produto é: %.2f\n", valortotal);      //Instrução na tela para o usuário

    return 0;
    

}//fim
