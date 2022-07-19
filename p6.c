#include<stdio.h>
#include<string.h>
int main()
{
    int t,l,sum,i;
    char n[6];
    scanf("%d",&t);
    for(i=0; i<t; i++){

    scanf("%s",&n);
    l= strlen(n)-1;
    sum= n[0] + n[l] - '0' - '0';
    printf("Sum = %d\n",sum);
    }
}
