#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


 typedef struct{
        char nome [30];
        char endereco [50];
        char matricula [10];
        char curso [30];
    } tAluno;

    tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(){
    int i, t = 0;
    char curso[30];

    printf("Digite o curso a ser procurado.\n");
    scanf("%s", &curso[30]);
    for (i = 0; i <= 100; i++){
        if (curso[30] == gAlunos[i].curso[30]){
            t++;
        }
    }
    printf("%d alunos estao matriculados no curso procurado.\n", t);
}

int main(void){

    int i;

    for(i = 0; i < 2; i++){
        printf("Registro de alunos. Digite o nome do aluno %d de Computacao.\n", i+1);
        scanf("%s", &gAlunos[i].nome[30]);
        //printf("%s\n", gAlunos[i].nome[30]);
        gAlunos[i].curso[30] = "Computacao";
    }
    printf("Registro de alunos. Digite o nome do aluno %d de Fisica.\n", 1);
    scanf ("%s", &gAlunos[2].nome[30]);

    consultaAlunosPorCurso();
return 0;
}
