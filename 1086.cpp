#include<bits/stdc++.h>
using namespace std;
#define total 300000
int prime[16000];
int n;
int mark[300000];
void sieve()
{
   int i,j,limit=sqrt(total);
   mark[1]=1;
   for(i=4;i<=total;i+=2)
   {
       mark[i]=1;
   }
   prime[++n]=2;
   for(i=3;i<=total;i+=2)
   {
       if(!mark[i])
       {
           prime[++n]=i;
       }
       if(i<=limit)
       {
           for(j=i*i;j<=total;j+=i*2)
           {
               mark[j]=1;
           }
       }
   }
}
int main()
{
    sieve();
    int t,i,j,n;
    while(scanf("%d",&t)!=EOF)
    {
        while(t--)
        {
            cin>>n;
            printf("%d\n",prime[n]);
        }
    }
    return 0;
}
