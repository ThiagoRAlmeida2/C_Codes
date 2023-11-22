#include <stdio.h>

int main(){
    int num1,num2,num3;
    
    printf("Digite o primeiro numero: ");
    scanf("%i",&num1);
    printf("Digite o segundo numero: ");
    scanf("%i",&num2);
    printf("Digite o terceiro numero: ");
    scanf("%i",&num3);
    
    if (num1 > num2 && num1 > num3){
        printf("%d é o maior",num1);
    }
    if (num2 > num1 && num2 > num3){
        printf("%d é o maior",num2);
    }
    if (num3 > num2 && num3 > num1){
        printf("%d é o maior",num3);
    }
    if (num1 == num2 && num1 == num3){
        printf("Todos os numeros são iguais");
    }
    return 0;
}