#include<stdio.h>
int main()
{
    int i,t,a[1000],j,sum=0,k;
    scanf("%d",&t);
    for(k=0; k<t; k++){

    scanf("%d",&a[k]);
    for(i=1; i<=a[k]; i++)
    {
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                sum= sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
        sum=0;
    }
    sum=0; printf("\n");
    }
}
