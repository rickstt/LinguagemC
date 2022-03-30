/*Programa para calcular a tabuada de acordo com a entrada do usuario.
Usando a estrutura de repetição, o usuário irá colocar
um digito e o programa irá fazer mostrar a tabuada do número
escolhido pelo usuário*/

#include <stdio.h>
int main() {
    int n;
    int multi;
    printf("Digite o número para calcular, e ENTER\n");
    scanf("%d", &n);

    for(multi = 0 ; multi <= 10; multi++){
        printf("%d x %d = %d\n", n,multi, n*multi);
    }

    
    return 0;
}