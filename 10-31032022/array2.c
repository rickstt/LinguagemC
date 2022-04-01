/*Programa para realizar soma usando array*/

#include <stdio.h>
#include <stdlib.h>
#include "stdcalc.h"

void main(){
    int valor[10]={7,24,77,23,4,51,14,8,10,5};

    soma(valor,10);
    maiorvalor(valor,10);
    menorvalor(valor,10);
    ordenar(valor,10);
}