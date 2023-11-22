#include<stdio.h>
int main(){
int x, y, quo, rest;
 printf("Digite um numero x:");
 scanf("%d",&x);
 printf("Digite um numero y:");
 scanf("%d",&y);
 quo = x/y;
 rest = x%y;
 printf("x:%d y:%d quo=%d", x, y, quo);
 printf("x:%d y:%d rest=%d", x, y, rest);
 return 0;
}
 
