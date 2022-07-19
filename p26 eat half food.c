#include<stdio.h>
int main()
{
    int count=0;
    float n;
    scanf("%f", &n);
    while(n>1)
    {
        count++;
        n= n/2;
    }
    printf("%d",count);
}
