#include<stdio.h>
#include<string.h>
int main(){
   int i,t,l;
   scanf("%d",&t);
   while(t--){
   char ara[100];
   scanf(" %[^\n]",ara);
   l= strlen(ara);
   for(i=l-1; i>=0;i--)
   {
       printf("%c",ara[i]);
   }
   printf("\n");
   }
}
