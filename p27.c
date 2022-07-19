#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[5],i,j,arm=0,temp;
    scanf("%d",&n);
    temp=n;
    i=0;
    while(1)
    {
        a[i]= n%10; //printf("a- %d\n",a[i]);
        n=n/10;     //printf("n- %d\n\n",n/10);
        if(n==0)
        {
            break;
        }
        i++;
    }
    j=i;
    for(i=0; i<=j; i++)
    {
        arm= arm + pow(a[i],3);
    }
    if(temp==arm)
    {
        printf("%d is an armstrong number!",temp);
    }
    else{
        printf("%d is not an armstrong number!",temp);
    }

}
