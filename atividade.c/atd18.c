# include  <stdio.h>

int  principal (){
    int macas;
    float valor;
    
    printf ( " Digite um valor: " );
    scanf ( " %i " ,&macas);
    
    if (macas < 12 ){
        valor = macas * 0.30 ;
        printf ( " Sua ficou compra no valor de R$ %.2f " , valor);
    } else {
        valor = macas * 0.25 ;
        printf ( " Sua ficou compra no valor de R$ %2.f " , valor);
    }
    return 0;
}