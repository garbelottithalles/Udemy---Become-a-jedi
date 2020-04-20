#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x, y;
}Ponto;

int localizacao(Ponto ponto, float raio, Ponto centro){
    float soma = pow(centro.x - ponto.y, 2) + pow(centro.y - ponto.y, 2);
    float distancia = sqrt(soma);
    if(distancia > raio){
        printf("Fora");
    }
    else{
        printf("Dentro");
        }
}

int main(){
    Ponto ponto, centro;
    float raio, resultado;

    centro.x = 0;
    centro.y = 0;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
    printf("Digite as cordenadas:");
    scanf("%f %f", &ponto.x, &ponto.y);

    localizacao(ponto, raio, centro);


}










