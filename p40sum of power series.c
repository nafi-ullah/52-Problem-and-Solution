#include<stdio.h>
#include<math.h>
int main()
{
   int i,x,sum=0,p,t;
    scanf("%d",&t);
    while(t--){
   scanf("%d %d",&x,&p);
   for(i=0; i<=p; i++)
   {
       sum= sum + pow(x,i);
   }
   printf("%d\n",sum);
   sum=0;
    }
}
