#include <stdio.h>

typedef struct
{
    char nome[15];
    int matricula;
    float notas[3], media;
} Aluno;

int main(void) {
    Aluno alunos[30];
    int i, matricula;

    for(i=0; i<30; i++){
        printf("\n\n-------------Aluno %i-------------\n\n", i);
        printf("Matricula:");
        scanf("%i", &matricula);

        if(matricula==0){
            break;
        }
        else{
            alunos[i].matricula = matricula;
        }

        printf("Nome:");
        scanf("%15s", alunos[i].nome);
        
        printf("Notas:");
        scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);
        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2])/3;
    }
    for(int j=0; j<i; j++){
        printf("\n\n");
        printf("Nome: %s\nMatricula: %i\n Media: %.2f", alunos[j].nome, alunos[j].matricula, alunos[j].media);
    }
}