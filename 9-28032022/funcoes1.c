/*Programa para trabalhar com funções. Vamos
usar funções com retorno, sem retorno, com argumentos
e sem argumentos(Parametros)*/

#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    printf("\n");
    for(int x = 0 ; x <= 49 ; x++){
        printf("#");
    }
    printf("\n");
}
void separadorLinha(){
    printf("\n");
    for(int x = 0 ; x <= 49 ; x++){
        printf("_");
    }
    printf("\n");
}
void pularLinha(int qtdVezes){
    for(int i = 1 ; i <= qtdVezes ; i++){
        printf("\n");
    }
}
char* comparar(int v1, int v2){
    if(v1 > v2){
        return "O primeiro número é maior que o segundo.\n";
    }
    else if (v1 == v2){
        return "Os números são iguais\n";
    }
    else {
        return "O segundo número é maior que o primeiro";
    }
}


void main(){
    int n1, n2;
    system("clear");

    //Chamando uma função
    separadorHT();
    pularLinha(1);

    printf("\t\tPrograma");
    pularLinha(1);

    //Chamando uma nova função
    separadorLinha();
    pularLinha(2);

    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite outro número:\n");
    scanf("%d", &n2);

    pularLinha(1);
    printf(comparar(n1,n2));
    pularLinha(1);

}