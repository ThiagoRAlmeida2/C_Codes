#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = (int *) malloc(sizeof(int));
    printf("Endereco: %id\n", p);
    getchar();
    return 0;
}