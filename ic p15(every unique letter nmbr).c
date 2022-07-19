#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    char ltr;
    int i, j , t,l,count=1,k;
    //fflush(stdion);
    gets(a);

    l= strlen(a);
    j=0;
    while(j<l){


    ltr= a[0];
        for(k=0; k<j; k++)
        {
            if(a[j]!=a[k])
            {
                ltr=a[j];
            }
            else if(a[j]==a[k]){
                j++;
                }
        }

    for(i=j+1; i<l; i++)
    {
        if(ltr==a[i])
        {
            count++;
        }
    }
    if(j<l){
    printf("%c = %d\n",a[j],count);
    }
    j++;
    count=1;
    }
}
