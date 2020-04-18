//ALOCAÇÃO
#include <stdio.h>
#include <stdlib.h>

int main(void){
    char* p;
    p = (char*) malloc(5 * sizeof(char));
    *p = 'a';
    for(int i = 0; i < 5; i++){
        p[i] = *p;
        printf("\n\nVetor: %d\nvalor: %c\nendereco: %p\n", i, p[i], &p[i]);  
    }
    free(p);
    p = NULL;
    printf("%d %p", *p, &p);
    }
