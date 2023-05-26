#include <bits/stdc++.h>
using namespace std;
int main()
{
    float f;
    cin>>f;
    int i=int(f);
    if(f==i)
    {
        cout<<"int "<<i<<endl;
    }
    else
    cout<<"float "<<i<<" "<<(f-i)<<endl;
}