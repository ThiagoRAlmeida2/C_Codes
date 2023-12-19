//Pilha simplesmente encadeada
#include <stdio.h>
#include <stdlib.h>
//=============================================================
typedef struct node
{
    int num;
    struct node *next;
}node;
//=============================================================
void AdicionarInicio(node *HEAD) //PUSH
{
    node *newnode = (node *) malloc(sizeof(node));
    if (!newnode)
    {
        printf("Sem memoria disponivel!\n");
        system("pause");
    }
    else
    {
        newnode->next = HEAD->next;
        HEAD->next = newnode;
        printf("newnode elemento: ");
        scanf("%d", &newnode->num);
    }
}
//=============================================================
void Exibir(node *HEAD)
{
    if (HEAD->next == NULL)
        printf("Lista vazia!");
    else
    {
        node *tmp;
        for (tmp=HEAD->next; tmp!=NULL; tmp=tmp->next)
            printf("%d\n", tmp->num);
    }
    printf("\n\n");
    system("PAUSE");
}
//=============================================================
void Remover(node *HEAD) //POP
{
    if (HEAD->next == NULL)
        printf("Lista vazia!");
    else
    {
        node *tmp=HEAD->next;
        HEAD->next = tmp->next;
        printf("No %d removido com sucesso!",tmp->num);
        free(tmp);
    }
    printf("\n\n");
    system("PAUSE");
}
//=============================================================
void Liberar(node *HEAD)
{
    node *tmp;
    while(HEAD->next != NULL)
    {
        tmp = (HEAD->next)->next;
        free(HEAD->next);
        HEAD->next = tmp;
    }
}
//=============================================================
int main(void)
{
    node *HEAD = (node *) malloc(sizeof(node));
    if(!HEAD)
    {
        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    HEAD->next = NULL; //Inicializa o nó

    int opt;
    do
    {
        system("CLS");
        printf("==================\n");
        printf(" PILHA ENCADEADA \n");
        printf("==================\n");
        printf(" 1-Adicionar no \n");
        printf(" 2-Remover no \n");
        printf(" 3-Exibir pilha \n");
        printf(" 4-Liberar pilha \n");
        printf(" 5-Sair \n");
        printf("==================\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opt);
        system("CLS");

        switch(opt)
        {
            case 1: AdicionarInicio(HEAD);
                break;
            case 2: Remover(HEAD);
                break;
            case 3: Exibir(HEAD);
                break;
            case 4: Liberar(HEAD);
                Exibir(HEAD);
                break;
            case 5: Liberar(HEAD);
                break;
            default: printf("Comando invalido\n\n");
        }
    }while(opt!=5);
    free(HEAD);
    return 0;
}
