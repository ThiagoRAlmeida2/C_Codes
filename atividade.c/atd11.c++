#include<stdio.h>
#include<math.h>

int main (){ 
    int notas, notas200, notas100, notas50, notas20, notas10, notas5;
    float compra, pago, troco;
    int moedas, m50, m25, m10, m5, temp;

    printf("Valor da compra:");
    scanf("%d", &compra);
    printf("Valor pago pelo cliente:");
    scanf("%d", &pago);

    troco= pago-compra;

    printf("Troco:%d\n", troco);
    printf("Use essas notas para o troco:\n");

    notas200= troco / 200;
    troco= troco % 200;

    notas100= troco / 100;
    troco= troco % 100;

    notas50= troco / 50;
    troco= troco % 50;

    notas20= troco / 20;
    troco= troco % 20;

    notas10= troco / 10;
    troco= troco % 10;

    notas5= troco / 5;
    troco= troco % 5;

    printf("Notas de 200:%d\n", notas200);
    printf("Notas de 100;%d\n", notas100);
    printf("Notas de 50:%d\n", notas50);
    printf("Notas de 20:%d\n", notas20);
    printf("Notas de 10:%d\n", notas10);
    printf("Notas de 5:%d\n", notas5);

    troco = round((valor - compra)*100);
    temp = round(pago - compras);~
    troco = troco - ((int)temp)*100;
    
    moedas = (int)valor;

    m50= moedas / 50;
    troco = troco % 50;
    m25= moedas / 25;
    troco= troco % 25;
    m10= moedas / 10;
    troco= troco % 10;
    m5= moedas / 5;
    troco= troco % 5;

    printf("Moedas de 50:%.f\n", m50);
    printf("Moedas de 25:%.f\n", m25);
    printf("Notas de 10:%.f\n", m10);
    printf("Moedas de 5:%.f\n", m5);
    
    
return 0;
}