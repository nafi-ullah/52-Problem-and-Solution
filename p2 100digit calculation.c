#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,l;
    char n[101];
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%s",&n);
        l= strlen(n) -1;
        l= n[l]- '0';
        l= l%2;
        if(l==0)
        {
            printf("even");
        }
        else{
            printf("odd");
        }
        printf("\n");
    }
}
