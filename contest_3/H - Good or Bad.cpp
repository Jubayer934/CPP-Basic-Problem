#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int tem=0;
        cin>>s;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                if(s[i+1]=='0')
                    if(s[i+2]=='1')
                    {
                        tem++;
                        
                    }
            if(s[i]=='0')
                if(s[i+1]=='1')
                    if(s[i+2]=='0')
                    {
                        tem++;
                    }
        }
        if(tem==0)
                cout<<"Bad"<<endl;
                else
                                        cout<<"Good"<<endl;

    }
}