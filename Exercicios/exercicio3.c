/*Programa para reescrever o nome
 do produto digitado com espaço*/

//Inclusão da bibliotecas que serão utilizadas
#include <stdio.h>
#include <stdlib.h>

void main(){
    char produto[30];
    printf("Informe o nome do produto: \n");
    /*Vamos usar um comando no scanf para que ele consiga
    reconhecer o espaço dado pelo usuário na hora da digitação*/
    scanf("\n%[^\n]s", &produto);

    printf("Produto: %s \n", produto);
}