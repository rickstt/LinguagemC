/*Programa para converter números decimais para binário (De 0 a 74)*/


#include <stdio.h>
int main(){
    int decimal = 0;
    int resto = 1;
    int multiplicador = 1;
    int resultado = 0;

    printf("Digite o número que deseja converter para binário:\n");
    scanf("%d", &decimal);

    /*Estrutura de repetição while para fazer os cálculos da conversão*/
    while(decimal != 0){
        resto = (decimal % 2);
        decimal = (decimal / 2);
        resultado = (resultado + resto * multiplicador);
        multiplicador = (multiplicador * 10);
    }
    printf("%d", resultado);

    return 0;
}