#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n1,n2,ara1[200],tot,i,t;
    while(t--){
    cin>>n1;
    for(i=0; i<n1; i++)
    {
        cin>>ara1[i];
    }

    cin>>n2;
    tot= n1+n2;
    for(i=n1; i<tot; i++)
    {
        cin>>ara1[i];
    }

    sort(ara1, ara1 + tot);

    for(i=0; i<tot; i++)
    {
        cout<<ara1[i]<<" ";
    }
    cout<<endl;
    }
	return 0;
}
