#include <stdio.h>
#include <stdlib.h>


void soma(int array[], int tamanho){
    int rs=0;
    for(int i = 0 ; i < tamanho ; i++){
        rs += array[i];
    }
    printf("%d\n", rs);
}

void maiorvalor(int array[], int tamanho){
    int m = array[0];

    /*Começamos o laço com o número 1 porque o
    primeiro(0) elemento já está definido na
    var. M, então poupamos espaço e começamos
    do número seguinte.*/
    for(int i = 1 ; i < tamanho ; i++){
        if(array[i] > m){
            m = array[i];
        }
    }
    printf("O maior valor é: %d\n", m);

}

    /*Mesma lógica da aplicação anterior, porém
    desta vez trocamos os sinais de maior para menor
    para que assim possamos pegar o menor valor do array*/
void menorvalor(int array[], int tamanho){
    int m = array[0];

    for(int i = 1 ; i < tamanho ; i++){
        if(array[i] < m){
            m = array[i];
        }
    }
    printf("O menor valor é : %d\n", m);
}

    
void ordenar(int valores[], int tamanho){
    for(int j = 1 ; j < tamanho ; j++){
        int x = valores[j];
        int i;
        for(i = j-1 ; i >= 0 && valores[i] > x ; i--){
            valores[i + 1] = valores[i];
        }
        valores[i+1] = x;
    }
    for(int p = 0 ; p < tamanho ; p++){
        printf("%d - ", valores[p]);
    }
}