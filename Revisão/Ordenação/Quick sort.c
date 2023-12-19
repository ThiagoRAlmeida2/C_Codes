#include<stdio.h>
#include<stdlib.h>
void quick(int v[],int esq, int dir)
{
    int pivo = esq,i,ch,j;
    for(i=esq+1;i<=dir;i++)
    {
        j = i;
        if(v[j] < v[pivo])
        {
            ch = v[j];
            while(j > pivo)
            {
                v[j] = v[j-1];
                j--;
            }
            v[j] = ch;
            pivo++;
        }
    }
    if(pivo-1 >= esq)
        quick(v,esq,pivo-1);
    if(pivo+1 <= dir)
        quick(v,pivo+1,dir);
}
int main()
{
    int x, v[7] = {5,7,6,4,2,3,1};
    quick(v,0,6);
    for(x=0;x<7;x++)
        printf("%d ",v[x]);
    printf("\n");
    system("pause");
    return 0;
}
