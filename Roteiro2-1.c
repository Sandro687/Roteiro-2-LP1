#include <stdlib.h>
#include <stdio.h>
#include <string.h>

 typedef struct{
        char nome [30];
        char endereco [50];
        char matricula [10];
        char curso [30];
    } tAluno;

    tAluno gAlunos[100];

unsigned int ConsultaAlunosPorCurso(char *curso){
    int i, t = 0;

    for (i = 0; i < 100; i++){
        if(strcmp(gAlunos[i].curso, curso) == 0){
            t++;
        }
    }
    return t;
}

int main(void){

    int i;
    char curso[30];

    for(i = 0; i < 2; i++){
        printf("Registro de alunos. Digite o nome do aluno %d de Computacao.\n", i+1);
        gets(gAlunos[i].nome);
        gAlunos[i].curso[30] = "Computacao";
    }
    printf("Registro de alunos. Digite o nome do aluno %d de Fisica.\n", 1);
        gets(gAlunos[4].nome);
        gAlunos[i].curso[30] = "Fisica";
    printf("Qual curso deseja procurar?\n");
        gets(curso);

    printf("Existem %d alunos cursando dito curso.\n", ConsultaAlunosPorCurso(curso));

return 0;
}
