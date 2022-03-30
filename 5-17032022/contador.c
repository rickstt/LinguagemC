/*Programa para contar números, utilizando o sistema
de repetição (loop). Vamos definir uma variavel com número zero
e em seguida, vamos coloca-lá em um loop para fazer uma contagem 
de números. Ao definir um valor limite, o programa vai fazer
as repetições até o número definido, e em seguida o programa irá encerrar.*/

#include <stdio.h>
int main(){
    int x = 0;
    
    for(;x <= 10 ; x++){
        printf("%d\n", x);
    }

    return 0;
}
