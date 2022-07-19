#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    char alph[26];
    char ltr;
    int i, j , t,l,count=0,k;
    //fflush(stdion);
    gets(a);

    l= strlen(a);
    for(i=0; i<26; i++)
    {
        alph[i]= 97+i;
        //printf("%c\n",alph[i]);
    }
    for(i=0; i<26; i++)
    {
        j=0;
        while(a[j]!='\0')
        {
            if(alph[i]==a[j])
            {
                count++;
            }
            j++;
        }
        if(count>0)
        {
            printf("%c = %d\n",alph[i],count);
            count=0;
        }

    }

}
