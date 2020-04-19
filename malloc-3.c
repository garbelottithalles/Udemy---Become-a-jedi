/*
Crie um programa que deve perguntar quantos números o usuário quer adicionar em um vetor dinâmico. Armazene números aleatórios no vetor dinâmico.

Não desperdice memória e tempo, use a função realloc() para realocar memória sempre que o usuário quiser inserir mais números.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, quantidade, tamanho, op;
    tamanho = 0;
    int *p;
    free(p);
    p = NULL;

    do
    {
        printf("\n----------MENU----------\n\n");
        printf("\n0- SAIR,\n1- ADICIONAR e 2- LISTAR\n");
        scanf("%d", &op);
        if (op == 1){
            printf("Quantas posicoes deseja adicionar? ");
            scanf("%d", &quantidade);
            p = (int *)realloc(p, (tamanho + quantidade) * sizeof(int));
            for (i = 0; i < quantidade; i++){
                printf("Numero: ");
                scanf("%d", &p[tamanho + i]);
            }
            tamanho += quantidade;
        }
        if (op == 2){
            printf("\n\n--------Numeros--------\n");
            for (i = 0; i < tamanho; i++){
                printf("[%d] - Valor: %d Endereco: %p\n", i, p[i], &p);
            }
        }
        if (op > 2 || op < 0){
            printf("opcao invalida");
        }
    } while (op != 0);
    free(p);
    p = NULL;
}
