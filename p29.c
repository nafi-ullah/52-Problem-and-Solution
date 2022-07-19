#include<stdio.h>
int main()
{
    char ch;
    int t,i;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%c",&ch);
        if(ch>='a' && ch<='z')
        {
            printf("Lowercase Character\n");
        }
        else if(ch>='A' && ch<='Z')
        {
            printf("Uppercase Character\n");
        }
        else if(ch>='0' && ch<='9')
        {
            printf("Numerical Digit\n");
        }
        else
        {
            printf("Special Character\n");
        }
    }
}
