/*
Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas. Para isso, você deve criar uma struct Pessoa com esses dados.

1-Cadastre 5 pessoas com as informações necessárias.

2-Peça para o usuário informar um cpf. Se o cpf existir, imprima o nome e o IMC da pessoa encontrada. 
*/

#include <stdio.h>
#include <math.h>

typedef struct
{
    char name[15];
    char sex[1];
    float hight;
    float weight;
    int cpf;
}People;

int main(void){
    int i, j, cpf;
    People people[5];

    for(i=0; i<5; i++){
        printf("\n\n---------- %i----------\n\n", i);

        printf("Name: ");
        scanf("%15s", people[i].name);

        printf("Sex: ");
        scanf("%1s", people[i].sex);

        printf("Hight: ");
        scanf("%f", &people[i].hight);

        printf("Weight: ");
        scanf("%f", &people[i].weight);   

        printf("CPF: ");
        scanf("%d", &people[i].cpf);
    }

    do{
        printf("\n");
        printf("CPF to search:  ");
        scanf("%d", &cpf);
       
        for(j=0; j<i ; j++){
             if(cpf == people[j].cpf){
                printf("Name: %s, IMC: %3.2f", people[j].name, (people[j].weight/(pow(people[j].hight,2))));
            }
        }
    }while(cpf != 0);
}
