/*Programa para calcular aprovação ou a reprovação
do aluno através de sua nota. Vamos levar em consideração
a nota do aluno e compara-lá a média de aprovação da escola,
caso a nota do aluno for igual ou maior a 7, o aluno está aprovado.
Caso contrário estará reprovado*/

//inclusão da biblioteca standard de input/output
#include <stdio.h>
#define MEDIAESCOLA 7.0 /*Definição da constante média da escola (sempre em caixa alta)*/

//A seguir função main para dar start no programa
int main() { 
    float nota_aluno;    //Declaração da váriavel da nota do aluno
    printf("Digite a nota do aluno, e ENTER\n");    //Instrução na tela para o usuário
    scanf("%f", &nota_aluno);        //Armazenar as informações digitadas pelo usuário


    //Desvio de fluxo com if / else
    if(nota_aluno >= MEDIAESCOLA){
        printf("O aluno está aprovado!\n");
    }
    else{
        printf("O aluno está reprovado!\n");
    }

    return 0; //Fim do programa
}