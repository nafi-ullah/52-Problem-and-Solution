#include<stdio.h>
#include<math.h>
int main()
{
   int n,t,i;
   scanf("%d",&t);
   while(t--){
   scanf("%d",&n);

   for(i=n; i>0; i--)
   {
       printf("2^%d",i);
       if(i>1)
       {
           printf(" + ");
       }
   }
   printf("\n");
   }
}
