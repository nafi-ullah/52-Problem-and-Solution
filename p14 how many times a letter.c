#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    char b;
    int i, j , t,l,count=0;
    //fflush(stdion);
    gets(a);
    scanf("%c",&b);
    l= strlen(a);
    for(i=0; i<l; i++)
    {
        if(b==a[i])
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("Occurrence of '%c' in 'hello world' = %d",b,count);
    }
    else{
        printf("'%c' is not present",b);
    }

}
