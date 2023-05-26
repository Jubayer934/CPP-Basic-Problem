#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t ;
	while(t--){
		long long x ; 
		cin >> x ; 
		int ones = 0 ; 
		while(x){
			ones += (x%2);
			x /= 2;
		}
		long long ans = 1 ; 
		for(int i=1 ; i <= ones ; i++){
			ans *= 2; 
		}
		cout << ans - 1<< endl;
		//cout << pow(2,ones)-1 << endl;
	}	
	return 0;
}