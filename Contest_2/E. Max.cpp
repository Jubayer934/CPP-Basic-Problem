#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],n;
    cin>>n;
    long long max=0;
    for(int i=0;i<n;i++){
    cin>>a[i];
    if(max<a[i])
    {
        max=a[i];
    }
    }
    cout<<max<<endl;
}