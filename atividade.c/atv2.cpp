#include<stdio.h>
int main (){
	int a, sucessor, antecessor;
	printf("Digite um valor para a:");
	scanf("%d", &a);
	sucessor = a+1;
	antecessor = a-1;
	printf("sucessor de %d � %d", a, sucessor);
	printf("antecessor de %d � %d", a, antecessor);
}
