#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=1,t;
    char a[100];
    scanf("%d",&t);
    while(t--){
    scanf(" %[^\n]",a);
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("%d\n",count);
    count=1;
    }
}
