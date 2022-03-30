/*Programa para calcular o desconto do salário
de um funcionário. Caso o funcionário receba 
de salário um valor igual ou superior a 5 mil,
irá ser descontado 5% do salário de impostos.
Caso contrário não haverá desconto*/

//inclusão da biblioteca standard de input/output
#include <stdio.h>
#define LIMITE 5000.00 //Definição da constante limite salárial(sempre em caixa alta)

//Função main para dar start no programa
int main() {    
    float salario, desconto, total; //Declaração das variaveis
    printf("Digite o salário do funcionário, e ENTER\n");   //Interação com usuário
    scanf("%f", &salario);  //Armazena informações digitadas pelo usuário

    //Desvio de fluxo com if / else
    if(salario > LIMITE){
        desconto = (salario * 5 / 100);
        total = (salario - desconto);

        printf("O desconto será de:%.2f\n", desconto); //Interação com usuário
        printf("O salário líquido do funcionário é: %.2f\n", total); //Interação com usuário
    }
    else{
        printf("Não há desconto\n"); //Interação com usuário
        printf("O salário líquido do funcionário é de: %.2f\n", salario); //Interação com usuário
    }
    
    return 0;//fim
}
