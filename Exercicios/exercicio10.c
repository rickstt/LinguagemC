/*Programa para exibir uma tabela para o usuário,
que conta de 0 a 10. Não haverá interações com o usuário
o programa mostrará apenas a tabela*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    int i, j;

    /*Laço de repetição para poder formar a tabela
    automaticamente*/
    for(i=1 ; i <= 4 ; i++){
        for (j=1 ; j <= 4 ; j++){
            if (j < 4)
                printf("%d \t", j*i);
            else 
            printf("%d \n", j*i);
        }
    }
}