#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int n,k;
    int p=0,i;
    cin>>n;
    k=n;


    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            p=1;
        }
    }
    //cout<<p<<endl;

    if(p==1)
    {
        cout<<k<<" is not a prime number";
    }
    else if(p==0)
    {
        cout<<k<<" is a prime number";
    }


	return 0;
}
