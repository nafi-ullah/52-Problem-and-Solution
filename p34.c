#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,l,i,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d",&a,&b,&c);

    i=a;
    while(1)
    {
        if(i%b==0 && i%a==0)
        {
            l=i;
            break;
        }
        i++;
    }
    for(i=1; l*i<=c; i++)
    {
        printf("%d\n",l*i);
    }
    }
}
