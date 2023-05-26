#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],i=0,t=1;
    while (cin>>a[i])
    {
         if(a[i]==1999)
        {
            cout<<"Correct"<<endl;
            t++;
        }
        if(t==1)
        cout<<"Wrong"<<endl;
        i++;
    }
       
}