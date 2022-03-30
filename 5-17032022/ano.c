#include <stdio.h>
int main(){
    int ano;
    int qtd = 0;

    for(ano = 1950 ; ano <= 2022 ; ano++){
        if(ano % 4 == 0){
            printf("%d é bissexto\n", ano);
            qtd++;
        }
    }
    printf("Econtramos %d anos bissextos\n", qtd);


    return 0;
} 