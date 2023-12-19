#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, *vetor;
    vetor = (int *) calloc(5, sizeof(int));
    for (i=0;i<5;i++)
        vetor[i]=i;
    vetor = (int *) realloc(vetor,10 * sizeof(int));
    if (vetor==NULL)
    {
        printf("Erro ao realocar memória!");
        return(1);
    }
    for (i=5;i<10;i++)
        vetor[i]=i;
    for (i=0;i<10;i++)
        printf("vetor[%i]=%i\n", i, vetor[i]);
    getchar();
    free(vetor);
    return 0;
}
