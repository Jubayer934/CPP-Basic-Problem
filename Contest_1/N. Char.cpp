#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>=65 && x<97)
    cout<<char(tolower(x))<<endl;
    else
    cout<<char(toupper(x))<<endl;
}