#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,l;
    char a[100];
    scanf("%d",&t);
    while(t--){
    scanf(" %[^\n]",a);
    l=strlen(a);

    for(i=l-1; i>=0; i--)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    }
}
