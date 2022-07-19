#include<stdio.h>
#include<string.h>
struct sentence
{
    char word[15];
};
int main()
{
    struct sentence reverse[15];    //eat 0 1 2 = l=3
    int count=1,i,j,k,l;
    char sen[150];
    gets(sen);
    l= strlen(sen);
    i=0; j=0;k=0;
    while(sen[i]!='\0')
    {
        if(sen[i]!=' ')
        {
            reverse[j].word[k]= sen[i];

            //printf("%d %d %d %c\n",i,j,k,reverse[j].word[k]);
            k++;
        }
        else if(sen[i]==' ')
        {
            reverse[j].word[k]= '\0';
            j++;
            count++;
            k=0;
        }

        i++;
    }
    reverse[j].word[k]= '\0';
    //printf("%d %d %d %c\n",i,j,k,reverse[j].word[k]);
    printf("Count =%d\n", count);

}
