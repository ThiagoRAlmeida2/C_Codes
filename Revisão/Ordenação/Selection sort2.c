#include <stdio.h>
int swap(int *v1, int *v2)
{
    int t=*v1;
    *v1=*v2;
    *v2=t;
    return 0;
}
int main(void)
{
    int x, y, v[7] = {5,7,6,4,2,3,1};
    for(x=0 ; x<6 ; x++)
        for(y=x+1 ; y<7 ; y++)
            if(v[y] < v[x])
                swap(&v[x], &v[y]);
    for(x=0 ; x<7 ; x++)
        printf("%i ",v[x]);
    printf("\n\n\n");
    getchar();
    return 0;
}
