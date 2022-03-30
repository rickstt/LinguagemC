/*Programa para exibir o salário do cargo de acordo
com a escolha do usuário*/

//Bliblioteca standard de input/output
#include <stdio.h>

//Função main para dar start no código
int main(){
    char cargo[20]; //Definição da váriavel char com 20 limite máximo de até 20 chars.
    printf("Digite o cargo que deseja receber as informações, e ENTER:\n");
    scanf("%s", cargo);

    /* STRCMP para comprar strings, pois por padrão, ao comparar char
    é comparado apenas o primeiro caractere. */
    if (strcmp (cargo,"Diretor")==0){
        printf("O salário é: 15.000,00\n");
    }
    else if (strcmp (cargo,"Gerente")==0){
        printf("O salário é: 12.000,00\n");
    }
    else if (strcmp (cargo,"Analista")==0){
        printf("O salário é: 8.000,00\n");
    }
    else if (strcmp (cargo,"Assistente")==0){
        printf("O salário é: 4.000,00\n");
    }
    else if (strcmp (cargo,"Auxiliar")==0){
        printf("O salário é: 2.000,00\n");
    }
    else{
        printf("Não há salário.\n");
    }
    
    return 0;
}