#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count=0,p;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%5==0 || i%10==0 && i<100)
        {
            count++;
            p= i/10;
            if(p%2==0 && i%10!=0)
            {
                count++;
            }
        }

    }
    count--;
    printf("%d",count);
}
