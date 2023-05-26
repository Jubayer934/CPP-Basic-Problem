#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tem=1;
    cin>>n;
    if(n<2)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    int x=int(sqrt(n));
    for(int i=2;i<=x;i++)
        if(n%i==0)
        tem++;
    if(tem==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}