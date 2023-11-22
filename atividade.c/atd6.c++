#include <stdio.h>
int main() {
  float raio, area;
  const float pi= 3.14159;

  printf("Digite o tamanho do circulo:");
  scanf("%f", &raio);
  
  area= pi * raio * raio;

  printf("A area do circulo %.2f e: %.2f", raio, area);
return 0;
}
