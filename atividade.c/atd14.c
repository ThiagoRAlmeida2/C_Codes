#include <stdio.h>

int  principal (){
	int num;

	printf ( " Digite um numero: " );
	scanf ( " %i " ,&num);

	if (num < 0 ){
		printf ( " O numero e negativo. " );
	} else {
		if (num > 0 ){
			printf ( " O número é positivo. " );
		} else {
			printf ( " O numero e zero. " );
		}
	}
    return 0;
}