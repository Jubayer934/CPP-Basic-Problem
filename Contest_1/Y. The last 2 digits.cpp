#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long result;
    result=(a%100)*(b%100)*(c%100)*(d%100);
    result=result%100;
    if (result<10)
    cout<<0<<result<<endl;   ///to make two digit in result. under number 10 has only 1 digit.
    else
    cout<<result<<endl;
}