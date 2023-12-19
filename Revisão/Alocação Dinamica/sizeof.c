#include <stdio.h>
#include <stdlib.h>
struct ponto
{
    int x,y; //armazena 2 como valor inicial
};
int main(void)
{
    int v[10];
    printf("short : %i\n", sizeof(short));
    printf("int : %i\n", sizeof(int));
    printf("float : %i\n", sizeof(float));
    printf("double : %i\n", sizeof(double));
    printf("int v[10] : %i\n", sizeof(v));
    printf("struct ponto: %i\n", sizeof(struct ponto)); //mesmo valor do double
    system("pause");
    return 0;
}
