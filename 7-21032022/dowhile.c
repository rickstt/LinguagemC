/*Programa para apresentar números pares entre
0 e 50. Vamos usar a estrutura de repetição do while*/
#include <stdio.h>
int main(){
    int x = 0;
    do{
        if(x % 2 == 0){
            printf("O número %d é par\n", x);
        }
        x++;
    }while(x <= 50);
    

    return 0;
}