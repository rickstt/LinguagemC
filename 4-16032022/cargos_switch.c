/*Programa para exibir o salário do cargo de acordo
com a escolha do usuário*/

//Bliblioteca standard de input/output
#include <stdio.h>

//Função main para dar start no código
int main(){
    int opcao = 0;

    //comando para limpar a tela
    system("clear");//comando para limpar a tela
    printf("#########################################");
    printf("\n#\tPrograma para exibir salário\t#\n");
    printf("#########################################\n");
    printf("\nEscolha um dos cargos abaixo digitando o número correspondente\n");
    printf("\t1 - Diretor\n");
    printf("\t2 - Gerente\n");
    printf("\t3 - Analista\n");
    printf("\t4 - Assistente\n");
    printf("\t5 - Auxiliar\n");
    printf("-----------------------------------------\n");
    scanf("%d", &opcao);
    printf("-----------------------------------------\n");


    switch(opcao){
        case 1:
            printf("O salário do Diretor é R$ 15.000,00\n");
        break;
        case 2:
            printf("O salário do Gerente é R$ 12.000,00\n");
        break;
        case 3:
            printf("O salário do Analista é R$ 8.000,00\n");
        break;
        case 4:
            printf("O salário do Assistente é R$ 4.000,00\n");            
        break;
        case 5:
            printf("O salário do Auxiliar é R$ 2.000,00\n");
        break;

        default:
            printf("Não há salário.\n");
        break;        
    }

    return 0;
}