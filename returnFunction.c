#include <stdio.h>
#include <stdlib.h>

void tabuada(int mult){
    for(int i = 1; i < 11; i++){
        printf("\n%d x %d = %d", i, mult, i*mult);
    }
}

int main(){
    int numero;
    printf("Digite um numero para a tabuada: ");
    scanf("%d", &numero);
    tabuada(numero);
}