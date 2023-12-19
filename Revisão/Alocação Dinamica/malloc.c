#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *x;
    x = malloc(sizeof(int));
    if(x){
        printf("Memoria alocada com sucesso!\n");
        printf("x: %d\n", *x);
        *x=50; //ponteiro para *x =50, logo o valor de *x vai para 50 independente do valor do conteudo
        printf("x: %d\n", *x);
    }else{
        printf("Erro ao alocar memoria!\n");
    }
    return 0;
}
