#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;  ///a=l1 b=r1 && c=l2 d=r2
    cin>>a>>b>>c>>d;
    if(b<c || a>d)
    cout<<"-1"<<endl;
    else
    cout<<max(a,c)<<" "<<min(b,d)<<endl;
}