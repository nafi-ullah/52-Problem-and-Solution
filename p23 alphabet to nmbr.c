#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,p;
    char a[100];
    scanf(" %[^\n]",a);
    l= strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            p= a[i] - 'A' +1;
            printf("%d",p);
        }
    }
}
