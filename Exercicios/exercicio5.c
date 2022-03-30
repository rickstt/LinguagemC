/*Programa para informar ao usuário se
o número digitado é maior que 20*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    printf("Informe o número: ");
    scanf("%d", &num);

    /*SE o número for maior que 20, aparecerá a mensagem
    na tela para a visualização do usuário*/
    if(num > 20){
        printf("Maior que 20\n");
    }
}