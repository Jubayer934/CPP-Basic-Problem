#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int t=0;
    for(int i=1;i<=x;i++)
    if(i%2==0)
    {
    cout<<i<<endl;
    t++;
    }
    if(t==0)
    cout<<"-1"<<endl;
}