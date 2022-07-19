#include<stdio.h>
int main()
{
    int n,i,t,j;
    scanf("%d",&t);
    for(j=0; j<t; j++){
    scanf("%d",&n);
    printf("Case %d: ",j);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    }
}
