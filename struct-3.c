//Crie um sistema de agenda telefônica. Para isto, você deve criar a struct Contato, que possui nome e telefone. Neste sistema, existe um menu com as seguintes opções:

//-Inserir um contato

//-Visualizar todos os contatos

//-Alterar nome ou numero do contato

//-Sair

#include <stdio.h>

typedef struct{
    char nome[15];
    int numero, acc; 
}Contato;

int main(){
    char nome[15], nome2[15];
    int j = 0, i = 0, op, acc;
    Contato contato[50];

    do{
        printf("\n| 0- SAIR | 1- ADICIONAR | 2- LISTAR | 3- ALTERAR\n");
        scanf("%d", &op);

        switch (op){
            case 1:
                contato[i].acc = i;
                printf("\n----------ADICIONAR CONTATO----------\n");
                printf("Nome: ");
                scanf("%15s", contato[i].nome);
                printf("Numero: ");
                scanf("%d", &contato[i].numero);
                i++;
            break;

            case 2:
                printf("\n----------LISTA DE CONTATOS----------\n");
                for(j = 0; j < i; j++){
                    printf("\n--------%d--------\nNome: %s\nNumero: %d\n\n", j, contato[j].nome, contato[j].numero);
                }
            break; 

            case 3:
                printf("\n----------ALTERAR CONTATO----------\n");
                printf("Codigo do contato a alterar:");
                scanf("%d", &acc);
                for(j = 0; j < i; j++){
                    if(acc == contato[j].acc){
                        printf("Digite o novo nome:");
                        scanf("%15s", contato[j].nome);
                        printf("Digite o novo numero:");
                        scanf("%d", &contato[j].numero);
                    }
                }
            break;
        }
    }while(op != 0);
}