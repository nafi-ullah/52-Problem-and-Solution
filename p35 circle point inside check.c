#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r,x1,y1,t;
    float dis;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&x,&y);
    scanf("%d",&r);
    scanf("%d %d",&x1,&y1);

    dis= (float) sqrt( pow((x1-x),2) + pow((y1-y),2));

    if(dis>r)
    {
        printf("The point is not inside the circle\n");
    }
    else if(dis<r)
    {
        printf("The point is inside the circle\n");
    }

    }
}
