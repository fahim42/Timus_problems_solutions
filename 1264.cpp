#include<stdio.h>
int main()
{
    int i,j,k,Count=0;
    scanf("%d %d",&i,&j);
    for(k=0;k<=j;k++)
    {
        Count+=i;
    }
    printf("%d\n",Count);
    return 0;
}
