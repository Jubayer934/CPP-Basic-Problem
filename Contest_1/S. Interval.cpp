#include<iostream>
using namespace std;
int main()
{
    double x;
    cin>>x;
    if (x<0.0 || x>100.0)
    cout<<"Out of Intervals"<<endl;
    else if(x<=25.0)
    cout<<"Interval [0,25]"<<endl;
    else if(x<=50.0)
    cout<<"Interval (25,50]"<<endl;
    else if(x<=75.0)
    cout<<"Interval (50,75]"<<endl;
    else
    cout<<"Interval (75,100]"<<endl;

}