#include<stdio.h>
#include<math.h>
int main()
{
   int i,n,t,j;
   long long int fact=1;
   float sum=0,div;
   scanf("%d",&t);
   while(t--){
    scanf("%d",&n);

    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
        fact= fact*i;
        }
        div= (float)j/fact;
        sum= sum + div ;
        //printf("%d %lld %f\n",j,fact,sum);
        fact=1;
    }
    printf("%.4f\n",sum);
    sum=0;
}

}
