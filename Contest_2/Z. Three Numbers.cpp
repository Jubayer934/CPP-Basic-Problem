#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,s;
	cin>>k >>s ;
	int way=0; 
	for(int i=0 ; i <= k ; i++){
		for(int j=0 ; j <= k ; j++){
			if(i+j <= s and (s-(i+j))<=k) way++;
		}
	}
	cout <<way<<endl;
	return 0;
}