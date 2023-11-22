#include <stdio.h>
int main () {
    float salario, vendas, comissao, salariof;
    comissao= 0.15;
    printf("Digite o seu salario:");
    scanf("%f", & salario);
    printf("Digite suas vendas:");
    scanf("%f", & vendas);
// calcular comissão
    comissao= vendas*0.15;
//calcular salariof
salariof= salario + comissao;

printf("salario: R$ %.2f\n", salario);
printf("comissão sobre vendas: R$ %.2f\n", comissao);
printf("O seu salario final é: R$ %.2f\n", salariof);
return 0;
}