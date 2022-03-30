/*Programa para calcular o reajuste salarial
do funcionário, e informar o novo salário.*/

#include <stdio.h>
#include <stdlib.h>
void main(){
    int cargo;
    float salario, reajuste;
    printf("Infome o cargo do funcionário: ");
    scanf("%d", &cargo);
    printf("Informe o salário atual: ");
    scanf("%f", &salario);

    /*Desvio de fluxo para que o programa possa
    calcular o reajuste salarial*/
    if(cargo == 1)
        reajuste = (salario * 7) / 100;

    else if (cargo == 2)
        reajuste = (salario * 9) / 100;

    else if (cargo == 3)
        reajuste = (salario * 5) / 100;

    else
        reajuste = (salario * 12) / 100;
        
    printf("O reajuste é: %.2f", reajuste); //Formatação .2f para que haja apenas 2 casas decimais após a vírgula
    printf("O novo salário é: %.2f", salario + reajuste);
}