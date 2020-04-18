#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* a;
    //ALOCANDO 
    a = (int*) malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++){
        a[i] = i;
        printf("\nValor:%d\n Endereco: %p\n", a[i], &a[i]);
    }
    free(a);
    a = NULL;

    //REALOCANDO
    a = (int*) realloc(a, 10 * sizeof(int));
    for(int i = 0; i < 10; i++){
        a[i] = i;
        printf("\nValor:%d\n Endereco: %p\n", a[i], &a[i]);
    }


}