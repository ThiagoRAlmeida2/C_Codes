#include <stdio.h>

int  principal () {
    int num1, num2;

    printf ( " digite um numero: " );
    scanf ( " %i " , &num1);
    printf ( " digite outro numero: " );
    scanf ( " %i " , &num2);

    if (num1 == num2){
        printf ( " Os numeros sao iguais " );
    } else {
        if (num1 > num2){
            printf ( " O maior numero é %i " ,num1);
        } else {
            printf ( " O maior numero é %i " ,num2);
        }
    }
	return 0;
}