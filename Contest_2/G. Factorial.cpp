#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,n,result=1;
    cin>>x;
    while(x--){
        result=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        result=result*i;
        cout<<result<<endl;
    }
}
