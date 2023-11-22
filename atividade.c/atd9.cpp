#include <stdio.h>
int main() { 
    int A, B, aux;
    printf("Digite um valor para A:");
    scanf("%d", &A);
    printf("Digite um valor para B:");
    scanf("%d", &B);
    aux=A;
    A=B;
    B=aux;
    printf("A:%d B:%d \n", A, B);
    
return 0;

    }