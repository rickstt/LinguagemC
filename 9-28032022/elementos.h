/*Este arquivo foi nomeado com a extensão .h (header
-> cabeçalho "Biblioteca"). Assim podemos criar
algumas funções e/ou estruturas compartilhadas, 
sendo possível ser utilizada por diversos programas. 
Todas as vezes que essa biblioteca for utilizada, é 
importante realizar a sua inclusão no código
que irá utilizá-la*/

#include <stdio.h>
#include <stdlib.h>

void separador(){
    printf("\n");
    for(int x = 0 ; x <= 84 ; x++){
        printf("#");
    }
    printf("\n");
}

void br(int qtdVezes){
    for(int x = 0 ; x <= qtdVezes ; x++){
        printf("\n");
    }
}