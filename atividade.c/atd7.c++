#include <stdio.h>
int main()  {
    float raio, area, pi;
    pi= 3,14;
    printf("Digite o valor do raio:");
    scanf("%f", & raio);
    area= pi * raio * raio;
    printf("A area de %.2f é: %.2f", raio, area);
   return 0;
 }