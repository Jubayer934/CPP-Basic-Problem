#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n; 
	int ans=0;
	for(int i=2 ; i <= n ; i++){
		int prime=1;
		for(int j=2 ; j<i ; j++){
			if(i%j==0){
				prime = 0;
				break;
			}
		}
		if(prime==1) cout <<i<<" "; 
	}
	return 0;
}