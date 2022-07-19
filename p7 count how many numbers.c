#include<stdio.h>
#include<string.h>
int main()
{
    int count,i,l,t,j;
    char n[100];
    scanf("%d",&t);
    for(j=0; j<t; j++){
    fflush(stdin);
    gets(n);
    count=1;
    l= strlen(n);
    for(i=0; i<l; i++)
    {
        if(n[i]==' ')
        {
            count++;
        }
    }
    printf("%d\n",count);
    }
}
