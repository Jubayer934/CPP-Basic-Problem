#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i=0,sum=0;
    string num;
    cin>>num;
    a=num.size();
    while(a--){
        int k=int(num[i]);
        i++;
        switch (k)
        {
        case 49:
            sum+=1;
            break;
        case 50:
        sum+=2;
        break;
        case 51:
        sum+=3;
        break;
        case 52:
        sum+=4;
        break;
          case 53:
        sum+=5;
        break;
          case 54:
        sum+=6;
        break;
          case 55:
        sum+=7;
        break;
          case 56:
        sum+=8;
        break;
          case 57:
        sum+=9;
        break;
        default:
            break;
        }
    }
    cout<<sum<<endl;

}