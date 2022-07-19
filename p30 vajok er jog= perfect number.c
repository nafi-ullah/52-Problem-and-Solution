#include<stdio.h>
int main()
{
    int i,t,a[1000],j,sum=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
        for(j=1; j<a[i]; j++)
        {
            if(a[i]%j==0)
            {
                sum= sum+ j;
            }
        }
        if(sum==a[i])
        {
            printf("YES, %d is a perfect number\n",a[i]);
        }
        else{
            printf("NO, %d is not a perfect number\n",a[i]);
        }
        sum=0;
    }

}
