#include <stdio.h>

int  principal (){
	int num;
	printf ( " Digite um numero: " );
	scanf ( " %i " ,&num);
	if (num % 2 == 0 ){
		printf ( " Número Par! " );
	} else {
		printf ( " Número Impar! " );
	}
    return 0;
}
