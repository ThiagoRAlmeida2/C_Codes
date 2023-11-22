#include <stdio.h>

int  principal (){
	int num;
	printf ( " Digite um numero: " );
	scanf ( " %i " ,&num);
	if (num == 0 ){
		printf ( " Número Zero " );
	} else {
		if (num > 0 ){
			printf ( " Número Positivo " );
		} else {
			printf ( " Numero Negativo " );
		}
	}
	return 0;
}