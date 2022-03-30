/*Programa para cadstrar clientes com os seguintes
dados: Nome, idade, email e cpf*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    struct cliente{
        char nome[30];
        char email[120];
        int idade;
    };

    struct cliente novoCliente, *pNovoCliente;
    pNovoCliente = &novoCliente;

    system("clear");

    printf("Entre com o nome do cliente: \n");
    scanf("%s", &pNovoCliente->nome);

    printf("Entre com o email do cliente: \n");
    scanf("%s", &pNovoCliente->email);

    printf("Entre com a idade do cliente: \n");
    scanf("%d", &pNovoCliente->idade);

    printf("O nome do cliente é: %s\n", pNovoCliente->nome);
    printf("O email do cliente é: %s\n", pNovoCliente->email);
    printf("A idade do cliente é: %d\n", pNovoCliente->idade);
    
    
}