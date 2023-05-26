#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],t;
    int e=0,o=0,p=0,n=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    cin>>a[i];
    if(a[i]%2==0)
    e++;
    else
    o++;
    if(a[i]<0)
    n++;
    else if(a[i]==0)
    {}
    else
    p++;
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<n<<endl;

}