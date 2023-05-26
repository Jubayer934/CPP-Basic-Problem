#include <bits/stdc++.h>
using namespace std;
int main()
{
	while(true){
		int n,m;
		cin >> n >> m ; 
		if(n<=0 or m<=0){
			return 0 ; 
		}
		if(n>m) swap(n,m);
		int sum = 0 ; 
		for(int i=n; i <= m ; i++){
			cout << i << " " ; 
			sum +=i ; 
		}
		cout << "sum ="<<sum<<endl; 
	}
	return 0;
}