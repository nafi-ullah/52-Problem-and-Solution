#include<stdio.h>
#include<math.h>
int main()
{
    int a[20],t,i,check,pos=0,neg=0,sum;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<(t-1); i++)
    {
        check= a[i]-a[i+1];
        if(check>0)
        {
            pos=1;
        }
        else if(check<0)
        {
            neg=1;
        }
        else if(check==0)
        {
            sum=0;
        }
    }
    sum= pos+neg;
    if(sum==1 || sum==0)
    {
        printf("YES");
    }
    else if(sum==2)
    {
        printf("NO");
    }

}
