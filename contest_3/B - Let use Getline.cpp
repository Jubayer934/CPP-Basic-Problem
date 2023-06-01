#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string x;
getline(std::cin, x); 
   for(char c:x)
    {
        if(c=='\\')
        break;
        cout<<c;
        
    }
}