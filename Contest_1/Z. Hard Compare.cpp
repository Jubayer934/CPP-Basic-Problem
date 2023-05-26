#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x,y;
    cin>>a>>b>>x>>y;
    if(b*log(a)>y*log(x))   ///log is use to make a number shorter or like {log10(1000)=3 && log2(8)=3}
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}