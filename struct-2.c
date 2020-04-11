/*
Escreva um programa que simule contas bancárias, com as seguintes especificações:

-Ao iniciar o programa vamos criar contas bancárias para três clientes.
-Cada conta cliente terá o nome, CPF.
-Cada conta terá número da conta, cpf do cliente e saldo;
-No ato da criação da conta o cliente precisará fazer um depósito inicial.
-Após as contas serem criadas, o sistema deverá possibilitar realizações de saques ou depósitos nas contas. OBS: Crie um menu com essas opções.
-Para fazer qualquer operação, o cliente deverá informar o número da conta e o valor.
-Sempre que uma operação de saque ou depósito for realizada, o sistema deverá imprimir o nome do titular e o saldo final da conta.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    int cpf;
    float saldo;
    int acc;
} Cliente;

Cliente cliente[3];

int i, j, acc = 1, conta, op;
float saque, deposito;

int main(){
    for (i = 0; i < 3; i++){
        printf("\n\n---------------Cadastro---------------\n\n");
        cliente[i].acc = acc++;
        printf("\nNome: ");
        scanf("%20s", cliente[i].nome);
        printf("\nCPF: ");
        scanf("%d", &cliente[i].cpf);
        printf("\nPara criar uma conta eh necessario um deposito inicial..\nValor: ");
        scanf("%f", &cliente[i].saldo);
    }

    while(op != 3){
        printf("\n1- SAQUE, 2- DEPOSITO, 3- SAIR\n");
        scanf("%d", &op);
        
        if(op == 1){
            printf("Digite sua conta: ");
            scanf("%d", &conta);

            for(j = 0; j < i; j++){
                if(conta == cliente[j].acc){
                    printf("\n\n--------------- [%d] ---------------\n\n", cliente[j].acc);
                    printf("Valor do saque: ");
                    scanf("%f", &saque);

                    if(saque > cliente[j].saldo){
                        printf("Saldo indisponivel.\n");
                    }
                    if(saque <= cliente[j].saldo){
                        cliente[j].saldo = cliente[j].saldo - saque;
                        printf("\n\n--------------- [REALIZADO] ---------------\n\n");
                        printf("\nNome: %s\nSaldo: R$%.2f\n", cliente[j].nome, cliente[j].saldo);
                    }
                }
            }
        }
        if(op == 2){
            printf("Digite sua conta: ");
            scanf("%d", &conta);

            for(j = 0; j < i; j++){
                if(conta == cliente[j].acc){
                    printf("\n\n--------------- [%d] ---------------\n\n", cliente[j].acc);
                    printf("Valor do deposito: ");
                    scanf("%f", &deposito);

                    if(deposito <= 0){
                        printf("O deposito deve ser positivo: ");
                    }
                    if(deposito > 0){
                        cliente[j].saldo = cliente[j].saldo + deposito;
                        printf("\n\n--------------- [REALIZADO] ---------------\n");
                        printf("\nNome: %s\nSaldo: R$%.2f\n", cliente[j].nome, cliente[j].saldo);
                    }
                }
            }
        }
    }
}
