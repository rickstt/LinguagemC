#include <stdio.h>

#define APROVADO 6.0
#define REPROVADO 4.0
int main(){
    float nota, media=0, nota_final;
    int x;

    system("clear");

    printf("###########################################################################################\n");
    printf("\nEm um total de 4 notas, digite as notas conforme as instruções que o programa irá oferecer\n");
    printf("\n###########################################################################################\n\n");

    for(x = 1 ; x <=4 ; x++){
        printf("Digite a nota do aluno, e ENTER\n");
        scanf("%f", &nota);
        nota_final += nota;
    }

    media =  nota_final / 4;
    printf("A nota final do aluno é: %.2f\n", media);

    if(media >= APROVADO){
        printf("O aluno está APROVADO!\n");
    }
    else if(media <= REPROVADO) {
        printf("O aluno está REPROVADO!\n");
    }
    else{
        printf("O aluno está em RECUPERAÇÃO!\n");
    }
    return 0;
}