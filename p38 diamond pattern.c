#include<stdio.h>

int main()
{
   int row, col, t,n,m;
   scanf("%d",&t);
   while(t--){
   scanf("%d %d",&n,&m);

   for(row=0; row<n; row++)
   {
       for(col=0; col<row; col++)
       {
           printf("%d",m);
       }
       printf("\n");
   }
   for(row=0; row<n; row++)
   {
       for(col=n-row; col>0; col--)
       {
           printf("%d",m);
       }
       printf("\n");
   }
   }
}
