#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string x,y;
    cin>>x>>y;
    string z=x+y;
    int a,b;
    a=x.length();
    b=y.length();
    cout<<a<<" "<<b<<endl;
    cout<<z<<endl;
    swap(x[0],y[0]);
    cout<<x<<" "<<y<<endl;
}