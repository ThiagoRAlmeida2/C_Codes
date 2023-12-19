#include <stdio.h>
#include <stdlib.h>
//------------------------------------------------
typedef struct arvore
{
    int info;
    struct arvore *esq;
    struct arvore *dir;
}arvore;
arvore *raiz;
//------------------------------------------------
arvore *monta_arvore(arvore *n_ant, arvore *n_seg, int pValor)
{
    if(n_seg == NULL)
    {
        n_seg = (arvore *) malloc (sizeof(arvore));
        if (n_seg == NULL)
        {
            printf("\n\nErro. Sem memoria para alocar\n\n");
            system("pause");
            exit(0);
        }
        n_seg->esq = NULL;
        n_seg->dir = NULL;
        n_seg->info = pValor;
        if(n_ant == NULL)
        {
            printf("\nEsse numero Adicionado e a raiz\n");
            system("pause");
            return n_seg;
        }
        if(pValor < n_ant->info)
        {
            n_ant->esq = n_seg;
            printf("\nEsse numero foi adicionado a esqueda de %d\n", n_ant->info);
        }
        else
        {
            n_ant->dir = n_seg;
            printf("\nEssa numero foi adicionado a dir %d\n", n_ant->info);
        }
        system("pause");
        return n_seg;
    }
    if(pValor < n_seg->info)
        monta_arvore(n_seg, n_seg->esq, pValor);
    else
        monta_arvore(n_seg, n_seg->dir, pValor);
}
//-------------------------------------------------------
void incluir (void)
{
    int vValor;
    printf("\nDigite o valor para inserir: ");
    scanf("%d", &vValor);
    if (raiz == NULL)
        raiz = monta_arvore(raiz, raiz, vValor);
    else
        monta_arvore(raiz, raiz, vValor);
}
//-------------------------------------------------------
void preordem(arvore *pNo)
{
    if (pNo != NULL)
    {
        printf("%d - ", pNo->info);
        preordem(pNo->esq);
        preordem(pNo->dir);
    }
}
//-------------------------------------------------------
void emordem(arvore *pNo)
{
    if (pNo != NULL)
    {
        emordem(pNo->esq);
        printf("%d - ", pNo->info);
        emordem(pNo->dir);
    }
}
//-------------------------------------------------------
void posordem(arvore *pNo)
{
    if (pNo != NULL)
    {
        posordem(pNo->esq);
        posordem(pNo->dir);
        printf("%d - ", pNo->info);
    }
}
//-------------------------------------------------------
int listar(arvore *pNo)
{
    int a=1,b=1;
    if(pNo != NULL)
    {
        printf("(");
        printf("%d",pNo->info);
        a=listar(pNo->esq);
        b=listar(pNo->dir);
        if(b==0 && a==0)
            printf("()");
        else
        if(b==0 && a!=0)
            printf("()");
        else
        if(b!=0 && a==0)
            printf("()");
        printf(")");
    }
    else
        return 0;
}
//-------------------------------------------------------
int main (void)
{
    int op;
    raiz=NULL;
    while(1)
    {
        system ("cls");
        printf ("Menu\n\n");
        printf ("1. Insere\n");
        printf ("2. Exibe Arvore\n");
        printf ("3. Exibe Arvore em PreOrdem\n");
        printf ("4. Exibe Arvore em PosOrdem\n");
        printf ("5. Exibe Arvore em EmOrdem\n");
        printf ("6. Sair\n\n");
        printf ("Entre a sua opcao: ");
        scanf ("%d",&op);

        switch (op)
        {
            case 1 : incluir();
                break;
            case 2 : listar(raiz);
                printf("\n\n");
                system("pause");
                break;
            case 3 : preordem(raiz);
                system("pause");
                break;
            case 4 : posordem(raiz);
                system("pause");
                break;
            case 5 : emordem(raiz);
                system("pause");
                break;
            case 6 : exit(0);
            default: printf ("\nOpcao errada");
                system ("pause");
                break;
        }
    }
}