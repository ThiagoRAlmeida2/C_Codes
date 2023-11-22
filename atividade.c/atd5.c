#include<stdio.h>
float main() {
    int cm = 0;
	float pol = 2.54;
	printf("Digite quantos cm: ");
	scanf("%d", & cm);
	float resultado = cm * pol;
	printf("%d em polegadas é igual a: %.2f", cm, resultado);
	
   return 0;
}