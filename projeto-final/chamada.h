#include <stdio.h>
#include <stdlib.h>
#include "cursos.h"
#include "unidade.h"
#include "atalhos.h"

void armazenar(){
/*O tipo FILE é utlizado para criar arquivos.
Este arquivo deve ser alocado em memória, portanto, sua
criação deve ser feita como ponteiro*/
    FILE *arquivo;

    /*A função fopen é reponsável por criar um arquivo
    Este arquivo fica disponível em memória até o fechamento*/
    arquivo = fopen("Cursos.txt","w");
    
    if(arquivo==NULL){
        printf("ERRO!\n O arquivo não foi encontrado ou não existe.\n");
        exit(1);
    }

    /*Declaração dos ponteiros*/
    cursos curso, *pCurso;
    unidades unidade, *pUnidade;
    pCurso = &curso;
    pUnidade = &unidade;

    /*Inicio do programa*/


    limpar();
    printf("Digite as informações do curso conforme solicitado.");
    br(2);

    printf("Digite o nome do curso: ");
    fgets(pCurso->nome_curso,150,stdin);

    limpar();
    printf("Informe a descrição do curso: ");
    fgets(pCurso->desc_curso,300,stdin);

    limpar();
    printf("Informe a carga horária do curso: ");
    fgets(pCurso->carga_horaria,80,stdin);

    limpar();
    printf("Informe a data de início do curso: ");
    fgets(pCurso->dt_inicio,20,stdin);

    limpar();
    printf("Informe a data de término do curso: ");
    fgets(pCurso->dt_termino,20,stdin);

    limpar();
    printf("Informe o valor do curso: ");
    scanf("%f", pCurso->preco);

    /*Informações sobre a unidade escolar*/

    limpar();
    printf("Agora digite as informações da unidade conforme solicitado.");
    br(2);

    printf("Informe o nome da unidade escolar: ");
    fgets(pUnidade->nome_unidade,100,stdin);

    limpar();
    printf("Informe a localização da unidade: ");
    fgets(pUnidade->localizacao,100,stdin);

    limpar();
    printf("Informe o horário de funcionamento da unidade: ");
    fgets(pUnidade->horario_funcionamento,40,stdin);

    limpar();
    printf("Informe o telefone de contato da unidade: ");
    fgets(pUnidade->telefone,20,stdin);

    limpar();
    printf("Curso registrado com sucesso.");
    br(1);


    /*Gravar arquivo*/
    fprintf(arquivo,pCurso->nome_curso);
    fprintf(arquivo,"%.2f",pCurso->preco);
    fprintf(arquivo,pCurso->dt_inicio);
    fprintf(arquivo,pCurso->dt_termino);
    fprintf(arquivo,pCurso->carga_horaria); 
    fprintf(arquivo,pUnidade->nome_unidade);

    /*Finalizar arquivo*/
    fclose(arquivo);

}
