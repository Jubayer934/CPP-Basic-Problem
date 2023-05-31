#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    
    cin>>s;
    int a=s.size();
    for(int i=0;i<a;i++)
    {
        if(s[i]==',')
        s[i]=' ';
    }
    for(int i=0;i<a;i++)
    {
        if(islower(s[i]))
        s[i]=toupper(s[i]);
        else if(isupper(s[i]))
        s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
}