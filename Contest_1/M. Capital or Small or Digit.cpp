#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    x=int(x);
    if(x<65){
        cout<<"IS DIGIT"<<endl;
    }
    else if(x>=65 && x<97)
    cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    else
    cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;

}