#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,r=3.141592653;
    cin>>x;
    cout << fixed << setprecision(9);
    cout<<(x*x)*r<<endl;
}