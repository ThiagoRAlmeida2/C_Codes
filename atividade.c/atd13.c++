#include<stdio.h>
int main() {
    float fabrica, imposto, revendedor, preco;

    printf("Digite o preco do carro desejado: ");
    scanf("%f", &fabrica);

    imposto= 0.45 * fabrica;

    revendedor= 0.28 * fabrica;
    
    preco= fabrica + imposto + revendedor;

    printf("Preco do seu carro: %.2f\n", preco);

return 0;
}


