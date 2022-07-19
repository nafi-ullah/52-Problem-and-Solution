#include<stdio.h>
#include<string.h>
int main()
{
   int i, t,l,v;
   char ara[100];
   char temp[100];
   scanf("%d",&t);
   while(t--){
   scanf(" %[^\n]",ara);
   l= strlen(ara);

   strcpy(temp,ara);

   if(strcmp(temp,strrev(ara))==0)
   {
       printf("Yes! It is palindrome\n");
   }
   else
   {
       printf("Sorry! It is not plindrome\n");
   }
   }
}
