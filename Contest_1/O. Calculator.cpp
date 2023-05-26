#include<iostream>
using namespace std;
int main()
{
    int x,y;
    char s;
    cin>>x>>s>>y;
    if(s=='+')
    cout<<(x+y)<<endl;
    else if(s=='-')
    cout<<(x-y)<<endl;
    else if(s=='*')
    cout<<(x*y)<<endl;
    else
    cout<<(x/y)<<endl;
}