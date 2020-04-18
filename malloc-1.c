/*  Escreva um programa em linguagem C que solicita ao usuário a quantidade de notas (números reais) a serem        *   armazenadas em um vetor dinâmico. Uma vez criado o vetor dinâmico, preencha o vetor com notas aleatórias entre *   0-10. Em seguida, imprima a média aritmética. Obs: não deve ocorrer desperdício de memória; e após o vetor ser *   utilizado, a memória deve ser devolvida.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int notas, i;
    float media;
    float* nota;

    printf("Quantas notas deseja calcular?");
    scanf("%d", &notas);

    nota = (float*) malloc(notas * sizeof(float));

    for(i = 0; i < notas; i++){
        printf("\n%d- Nota: ", i);
        scanf("%f", &nota[i]);
    }
    for(i = 0; i < notas; i++){
        media += nota[i];
        printf("\n%d- Nota: %.2f", i, nota[i]);
        printf("\nMedia: %.2f", media / notas);
    }
    free(nota);
    nota = NULL;
}
