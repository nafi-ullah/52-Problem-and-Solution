#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,p,q,c,a;
    cin>>t;
    while(t--){
    cin>>p>>q>>c;

    a=pow(p,q);
    a= a%c;
    cout<<a<<endl;
    }
	return 0;
}
