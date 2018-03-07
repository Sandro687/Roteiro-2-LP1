#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//Para o array gAlunos[100] do tipo tAluno ser global, a struct tambem devera ser global.
 typedef struct{
        char nome [15];
        char endereco [15];
        char matricula [15];
        char curso [15];
    } tAluno;
tAluno Registro;

    tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(char*curso){
}

int main(void){

    int i;

    for(i = 0; i <= 2; i++){
        printf("Registro de alunos. Digite o nome do aluno %d de Computacao.\n", i+1);
        getchar();
        gets(gAlunos[i].nome[15]);
    }
return 0;
}
