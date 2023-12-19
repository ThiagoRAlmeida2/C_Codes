#include <stdio.h>
#include <stdlib.h>
int swap(int *v1, int *v2)
{
    int t=*v1;
    *v1=*v2;
    *v2=t;
    return 0;
}
int main(void)
{
    int x, y, t, v[7] = {5,7,6,4,2,3,1};
    for(x=6; x>0; x--)
        for(y=0 ; y<x ; y++)
            if(v[y] > v[y+1])
                swap(&v[y], &v[y+1]);
    for(x=0 ; x<7 ; x++)
        printf("%i ",v[x]);
    printf("\n\n\n");
    system("pause");
    return 0;
}
