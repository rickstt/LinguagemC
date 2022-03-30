/*Programa que exibe uma mensagem
de boas vindas ao nosso usuário*/

//Inclusão da bliblioteca standard de input/output
#include <stdio.h>

//FUnção main para dar start no programa
int main(){
    char texto[25] = "Olá! Seja Bem Vindo\n"; //Variável char definida com 25 chars, para texto

    /*Quando usamos a váriavel char e
    definimos uma quantidade de caracteres para ser digitado,
    informamos ao programa que se trata de uma string 
    (Um conjunto de caracteres). Sendo assim, nós à chamamos
    de forma diferente da váriavl char comum(%c). Utilizando (%s).
    O S é a identifiação de uma string.*/
    printf("%s", texto);

    return 0;
}