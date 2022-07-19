#include<stdio.h>
int main()
{
    int i, x,y,j,p,q=0;
    scanf("%d %d",&x,&y);
    for(i=x; i<=y; i++)
    {
        for(j=2; j<i; j++)
        {

            if(i%j==0)
            {
                p=1;
            }
        }
        if(p==0 && i!=1)
        {

            q++;
        }
        p=0;
    }
    printf("%d",q);

}
