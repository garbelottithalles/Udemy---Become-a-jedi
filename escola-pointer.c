#include <stdio.h>

typedef struct
{

  char nome[10];

  int idade;

  float notas[3];

}Aluno;


int main()

{
  Aluno a;

  Aluno* pa = &a;

        printf("Nome: ");
        scanf("%10s", (*pa).nome);

        printf("Idade: ");
        scanf("%d", &(*pa).idade);

        printf("Notas: ");
        scanf("%f %f %f %f", &(pa->notas[0]), &(pa->notas[1]), &(pa->notas[2]), &(pa->notas[3]));
        printf("\nNome: %s\nIdade: %d\nNotas: %f %f %f %f", a.nome, a.idade, a.notas[0], a.notas[1], a.notas[2], a.notas[3]);
  return 0;
}

