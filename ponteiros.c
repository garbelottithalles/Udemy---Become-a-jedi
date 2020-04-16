#include <stdio.h>

typedef struct
{
  int nome, valor, endereco;
}Ponteiro;

int main(){
  int i;
  Ponteiro ponteiro[3];
  Ponteiro* p = ponteiro;

  for(i = 0; i < 3; i++){
    printf("Digie o valor: ");
    scanf("%d", &ponteiro[i].valor);
    ponteiro[i].nome = i;
    printf("\n%i : %p\n", i, &ponteiro[i]);
  }

    for(int j=0; j<i;j++){
      p = &ponteiro[j];
      printf("\n\n----------%i----------\n", (*p).nome);
      printf("Valor: %d\n", (*p).valor);
      printf("Endereco: %p\n", p);
      printf("Posicao: %i\n", *(ponteiro + j));
      printf("Endereco2: %p\n", &ponteiro[j]);
    }
  printf("\n");    
}