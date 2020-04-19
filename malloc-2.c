#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    int faltas;
    float media;    
}Aluno;

int main(void){
    int i, alunos;
    
    printf("Quantidade de alunos: ");
    scanf("%d", &alunos);

    Aluno* aluno;
    aluno = (Aluno*) malloc(alunos * sizeof(Aluno));

    for(i = 0; i < alunos; i++){
        printf("\nNome:");
        scanf("%10s", aluno[i].nome);

        printf("\nMedia: ");
        scanf("%f", &aluno[i].media);

        printf("\nFaltas: ");
        scanf("%d", &aluno[i].faltas);
    }

    for(i = 0; i < alunos; i++){
        printf("\n\n-----------ALUNO %d-----------\n", i);
        printf("Nome: %s, Media: %.2f, Faltas: %d\n", aluno[i].nome, aluno[i].media, aluno[i].faltas);
    }
    
free(aluno);
aluno = NULL;
}

/*Considere a seguinte estrutura: 

typedef struct

{
    char nome[30];

    float media;

    int faltas;

}Aluno;

Faça um programa que pede ao usuário o número de alunos, e cria um vetor de alunos dinamicamente. Após a criação do vetor dinâmica,  preencha as informações de cada aluno e imprima suas informações lidas. Obs: não deve ocorrer desperdício de memória; e após o vetor ser utilizado, a memória deve ser devolvida. 
*/