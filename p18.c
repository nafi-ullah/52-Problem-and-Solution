#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,k,j,l,m;
    char a[100],vowel[20],cons[50];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf(" %[^\n]",a);
        l= strlen(a);
        k=0; m=0;
        for(j=0; j<l; j++)
        {
            if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u')
            {
                vowel[k]=a[j];
                k++;
            }
            else if(a[j]!=vowel[k-1] && a[j]!=' ')
            {
                cons[m]=a[j];
                m++;
            }
        }
        printf("%s\n",vowel);
        printf("%s\n",cons);
    }
}
