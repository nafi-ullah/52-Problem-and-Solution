#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,p,row,col;
    long long int temp[52],q[52];
    //cin>>t;
    //while(t--){
    q[0]=0; temp[0]=0;
    q[1]= 1; temp[1]=1;
    q[2]= 0; temp[2]=0;
    cin>>p;

    for(row=1; row<=p; row++)
    {
        for(col=1; col<=row; col++)
        {
             //q[2]= q[2] + q[1];


             q[col]= temp[col] + temp[col-1];

             if(col==row)
             {
                 q[col]=1;
             }
            cout<<q[col]<<" ";
        }
        for(col=1; col<=row; col++)
        {
            temp[col]= q[col];
        }

        //q[col+1]=  q[col]+ q[col-1];
        cout<<endl;
    }

    //}
	return 0;
}
