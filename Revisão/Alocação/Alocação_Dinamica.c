#include <stdio.h>
#include <stdlib.h>
#define MAX 3
// ====================
int **dado; // Ponteiro para a pilha
int qtd = 0; //quantidade de elementos na pilha
int op; // Variável para a escolha do menu
//====================
int inserir(void) // push
{
    if (qtd == MAX)
        printf("A pilha está cheia!\n\n");
    else
    {
        int valor;
        printf("Digite o valor para entrar na pilha: ");
        scanf("%d", &valor);
        dado[qtd] = valor;
        printf("%d armazenado em %d\n\n", dado[qtd], qtd);
        qtd++;
    }
    return 0;
}
//===================Dinamica
int remover(void) // POP
{
    if (qtd == 0)
        printf("A pilha está vazia\n\n");
    else
    {
        qtd--;
        printf("Elemento %d removido\n", dado[qtd]);
        dado[qtd] = 0; // Opcional: Limpar o valor da posição removida
    }
    return 0;
}

int exibir(void)
{
    if (qtd == 0)
        printf("A pilha está vazia!\n\n");
    else
    {
        for (int i = 0; i < qtd; i++)
            printf("Posicao %d --> %d\n\n", i, dado[i]);
    }
    return 0;
}

int menu(void)
{
    system("cls");
    printf("=============\n");
    printf(" Alocação Dinamica \n");
    printf("  1 - INSERIR\n");
    printf("  2 - REMOVER\n");
    printf("  3 - EXIBIR \n");
    printf("  4 - SAIR   \n");
    printf("=============\n");
    printf("Digite uma opcao: ");
    scanf("%d", &op);
    system("cls");
    switch (op)
    {
    case 1:
        inserir();
        break;

    case 2:
        remover();
        break;

    case 3:
        exibir();
        break;
    }
    return 0;
}

int main(void)
{
    dado = (int *)malloc(MAX * sizeof(int)); // Alocação dinâmica da pilha

    if (dado == NULL)
    {
        printf("Falha na alocacao de memoria.\n");
        return 1;
    }

    while (op != 4)
    {
        menu();
        system("pause");
    }

    free(dado); // Libera a memória alocada de forma dinamica
    return 0;
}