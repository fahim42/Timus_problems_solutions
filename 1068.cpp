#include<stdio.h>
int main()
{
    int a,sum=0,i;
    while(scanf("%d",&a) !=EOF){
    if(a>0)
    {
       i=a;
       sum=0;
       while(i!=0)
       {
         sum+=i;
         i--;
       }
    }
   else if(a<=0)
    {
        i=a;
        sum=1;
        while(i!=0)
        {
            sum+=i;
            i++;
        }
    }
    printf("%d\n",sum);
    }
    return 0;
}
