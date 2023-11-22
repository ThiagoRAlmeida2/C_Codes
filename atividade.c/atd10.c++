#include<stdio.h>
int main(){ 
    int notas5, notas10, notas20, notas50, notas100, notas200, saque;
    printf("Digite o valor desejado:");
    scanf("%d", &saque);

    notas200= saque / 200;
    saque= saque % 200;
    notas100= saque / 100;
    saque= saque % 100;
    notas50= saque / 50;
    saque= saque % 50;
    notas20= saque / 20;
    saque= saque % 20;
    notas10= saque / 10;
    saque= saque % 10;
    notas5= saque / 5;
    saque= saque % 5;

    printf("Notas de R$200:%d\n", notas200);
    printf("Notas de R$100:%d\n", notas100);
    printf("Notas de R$50:%d\n", notas50);
    printf("Notas de R$20:%d\n", notas20);
    printf("Notas de R$10:%d\n", notas10);
    printf("Notas de R$5:%d\n", notas5);
return 0;
}
