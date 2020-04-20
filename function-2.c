// Crie uma função chamada imprimeTabuada. Nesta função você deve imprimir a tabuada de um dado número (use a função 
//  da questão anterior retornaNumeroAleatorio  para imprimir a tabuada do número gerado).


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int numero;

int retornaAleatorioDivisivelPor5(){
    srand(time(NULL));
    do{
        numero = rand()%101;
    }while(numero % 5 != 0);

    printf("Numero: %d", numero);
    return numero;
}

int imprimeTabuada(){
    retornaAleatorioDivisivelPor5();
    for(int i = 1; i < 11; i++ ){
        printf("\n%d x %d = %d\n", i, numero, i*numero);
    }
}

int main(){
    imprimeTabuada();
}