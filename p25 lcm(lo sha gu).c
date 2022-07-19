#include<stdio.h>
int main()
{
    int a,b,i,large,small;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        large= a;
        small=b;
    }
    else{
        large= b;
        small=a;
    }
    i=small;
    while(1)
    {
        if(i%small==0 && i%large==0)
        {
            printf("%d",i);
            break;
        }
        i++;
    }


}
