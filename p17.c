#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,count=0,j,l;
    char a[100];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf(" %[^\n]",a);
        l= strlen(a);
        for(j=0; j<l; j++)
        {
            if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n",count);
        count=0;
    }
}
