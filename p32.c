#include<stdio.h>

int main()
{
    int i,x,n,t;

    scanf("%d %d",&x,&n);
    for(i=1; x*i<=n; i++)
    {
        printf("%d\n",x*i);
    }
}
