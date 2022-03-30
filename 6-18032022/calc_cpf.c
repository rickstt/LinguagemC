/*Programa para verificar a válidade do cpf.
O usuário deverá entrar com 9 digitos, e em seguida o 
programa fará o cálculo e mostrara os 2 digitos validadores
do cpf. Na primeira prte pegamos os 9 primeiros digitos do cpf
e multiplicamos de 10 até 2, para encontrar o primeiro digito.
Para encontrar o segundo digito. pegmamos os 10 números e multiplicamos
de 11 até 2. se o resto da divisão for menor que 2 o digito será 0;
caso contrário pegamos o resto e subtraimos por 11. */

//Biblioteca standard de input/output
#include <stdio.h>

//Função main para dar start no programa
int main(){

    //definição das vars.
    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;
    char cpf[15];

    system("clear"); //Limpar a tela
    printf("Digite o CPF sem o traço:\n");
    scanf("%s", &cpf);

    /*Converter todos os caracteres do cpf para número.
    Para isso devemos criar um conjunto de números em
    tipo int, e realizar a conversão usando for*/
    int icpf[11];
    for (int x = 0 ; x <= 10 ; x++){
        icpf[x] = cpf[x] - 48;

    }

    /*Primeiro laço de repetição para capturar o primeiro
    dígito do cpf*/
    for(int i = 0 ; i <= 8 ; i++){
        total += (icpf[i] * peso10);
        peso10--;
    }
    resto = (total % 11);

    /*Se o resto da divisão for menor que dois, então, 
    o primeiro digiro de verificação será zero*/
    if(resto < 2){
        icpf[9] = 0;
    }
    else{
        icpf[9] = (11 - resto);
    }   
    /*Fim do primeiro laço de repetição*/

//------------------------------------------------------------------------------//

    /*Segundo laço de repetição para encontrar o próximo dígito*/

    //Zerando o valor das váriaveis para calcular novamente
    total = 0;
    resto = 0;
    
    for(int i = 0 ; i <=9 ; i++){
        total += (icpf[i] * peso11);
        peso11--;
    }

    resto = (total % 11);

    if(resto < 2){
        icpf[10] = 0;
    }
    else{
        icpf[10] = (11 - resto); 
    }
    /*Fim da estrutura de repetição, agora já temos os dois digitos
    do cpf que o usuario digitou e vamos dizer se é ou não válido*/


    for(int i = 0 ; i <= 10 ; i++){
        printf("%d", icpf[i]);
    }
    printf("\n");

    return 0;
}