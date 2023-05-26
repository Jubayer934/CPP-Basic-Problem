#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    char a,b;
    cin>>x>>a>>y>>b>>z;
    if(a=='+')
    x+y==z?cout<<"Yes"<<endl:cout<<x+y<<endl;
    else if(a=='-')
    x-y==z?cout<<"Yes"<<endl:cout<<x-y<<endl;
    else
    x*y==z?cout<<"Yes"<<endl:cout<<x*y<<endl;
}