#include<stdio.h>
int main (){
    int a, b, soma, prod, quoc;
    printf("Digite um numero a:");
    scanf("%d", &a);
    printf("Digite um numero b:");
    scanf("%d", &b);
    soma=a+b;
    prod=a*b;
    quoc=a/b;
    printf("a soma a:%d  b:%d soma=%d", a, b, soma);
    printf("a:%d b:%d prod=%d", a, b, prod);
    printf("a:%d b:%d quoc=%d", a, b,quoc);
    return 0;
    }

