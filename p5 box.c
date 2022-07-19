#include<stdio.h>
int main()
{
    int row, col, t,n,i;
    scanf("%d",&t);
    for(i=0; i<t; i++){
    scanf("%d",&n);
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    }
}
