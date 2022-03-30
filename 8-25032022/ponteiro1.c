/*Programa para estudar ponteiro,
este será nosso primeiro exemplo*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int valor = 50;
    int *pvalor = &valor;
    
    printf("%d é o valor, e está armazenado em %p\n", valor, pvalor);
}