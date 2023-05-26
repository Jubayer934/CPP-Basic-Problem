#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int y,m,d;
    y=x/365;
    m=(x%365)/30;
    d=((x%365)%30);
    cout<<y<<" years"<<endl;
    cout<<m<<" months"<<endl;
    cout<<d<<" days"<<endl;
}