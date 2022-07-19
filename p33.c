#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,n,p;
    float start,y,q;

    scanf("%d %d %d",&x,&n,&p);
    y=x;
    q=p;
    start= y/q;
    start= ceil(start);

    for(i=start; p*i<=n; i++)
    {
        printf("%d\n",p*i);
    }
}
