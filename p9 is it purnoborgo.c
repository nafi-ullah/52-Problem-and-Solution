#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s;
    scanf("%d",&n);
    r= sqrt(n);
    s= r*r;
    if(n==s)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
