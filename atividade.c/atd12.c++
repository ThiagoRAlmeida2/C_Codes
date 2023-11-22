#include<stdio.h>
int main(){ 
 float media1, media2, mediaf;

 media1= (7+8+9) / 3.0;
 media2= (4+5+6) / 3.0;
 mediaf= (media1+media2) / 2.0;

 printf("Media aritmetica dos numeros 7, 8 e 9: %.2f\n", media1);
 printf("Media aritmetica dos numeros 4, 5 e 6: %.2f\n", media2);
 printf("Soma das duas médias: %.2f\n", media1 + media2);
 printf("Media das medias: %.2f\n", mediaf);

return 0;
}