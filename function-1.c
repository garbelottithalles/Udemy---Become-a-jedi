
//  1- Crie uma função chamada retornaAleatorioDivisivelPor5. Esta função deve gerar um número aleatório divisível por 5 e retorná-lo.
//  Teste seu funcionamento no main

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int retornaAleatorioDivisivelPor5(){
    srand(time(NULL));
    int numero;
    do{
        numero = rand()%101;
    }while(numero % 5 != 0);

    printf("Numero: %d", numero);
    return numero;
}

int main(){
    retornaAleatorioDivisivelPor5();
}

