#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<min(x,min(y,z))<<" "<<max(x,max(y,z));
}