/*Programa para calcular a situação do aluno
neste programa teremos as seguintes saídas:
Aprovado quando nota maior ou igual a 7, 
reprovado quando nota menor ou igual a 4 e,
recuperação quando nota entre maior que 4 e menor que 7*/

//Biblioteca standard de input/output
#include <stdio.h>

//Definição das constantes aprovado e reprovado (Sempre em caixa alta)
#define APROVADO 7.0
#define REPROVADO 4.0

//Função main para dar start no programa
int main() {
    float nota_aluno; //Declaração da variável nota do aluno
    printf("Digite a nota do aluno, e ENTER\n"); //Interação com usuário
    scanf("%f", &nota_aluno);   //Armazena as informações digitadas pelo usuário

    //Desvios de fluxo. Aprovado, reprovado e recuperação
    if(nota_aluno >= APROVADO){
        printf("O aluno está aprovado.\n");
    }
    else if(nota_aluno <= REPROVADO){
        printf("O aluno está reprovado!\n");
    }
    else {
        printf("O aluno está de recuperação.\n");
    }
    return 0;
}
