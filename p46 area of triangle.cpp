#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    double a,b,c,s;
    cin>>t;
    while(t--){
    cin>>a>>b>>c;
    s= (a+b+c)/2;
    s= s*(s-a)*(s-b)*(s-c);
    s= sqrt(s);

    cout<<"Area="<<s<<endl;
    }
	return 0;
}
