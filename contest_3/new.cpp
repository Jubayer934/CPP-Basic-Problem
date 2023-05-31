#include <bits/stdc++.h>
#include<map>
using namespace std;
int main() {
  map<char,int>mp;
  int k[3];
  k[0]=4;
  k[1]=5;
  k[2]=6;

  mp.insert({'a',10});
  cout<<mp['a']<<endl;
  for(const auto i:k)
  cout<<i<<" "<<endl;

    return 0; 
}
