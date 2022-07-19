#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n,ara[100000],i,temp;

    cin>>n;
    for(i=0; i<(n-1); i++)
    {
        cin>>ara[i];
    }
    sort(ara, ara + (n-1));
    ara[n-1]= 0;
    for(i=0; i<(n-1); i++)
    {
        temp= ara[i+1] - ara[i];
        cout<<ara[i];
        if(temp!=1)
        {
            break;
        }
    }
    cout<<endl<<(i+2);

	return 0;
}
