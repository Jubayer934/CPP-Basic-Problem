#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string x,y;
    cin>>x;
    int i=0;
    while (true)
    {
        if(x[i]=='\\')
        break;
        y+=x[i];
        i++;

    }
    cout<<y<<endl;
}