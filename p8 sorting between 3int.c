#include<stdio.h>
int main()
{
    int n[3];
    int i,max,min,mid,t,j;
    scanf("%d",&t);
    for(j=1; j<=t; j++){
    for(i=0; i<3; i++)
    {
        scanf("%d",&n[i]);
    }
    max=n[0];
    min=n[0];
    for(i=0; i<3; i++)
    {
        if(max<n[i])
        {
            max=n[i];
        }
    }
    for(i=0; i<3; i++)
    {
        if(min>n[i])
        {
            min=n[i];
        }
    }
    mid= n[0]+n[1]+n[2];
    mid= mid-max-min;
    printf("Case %d: %d %d %d\n",j,min,mid,max);
    }
}
