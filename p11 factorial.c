#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,t;
    long long int fact=1;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    printf("%lld\n",fact);
    fact=1;
    }
}
