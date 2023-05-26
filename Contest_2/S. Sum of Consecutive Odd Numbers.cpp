#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t ; 
	while(t--){
		int a,b;
		cin>>a>>b;
		if(b<a) swap(a,b);
		int sum = 0;
		for(int i=a+1 ; i < b ; i++){
			if(i%2) sum+=i;
		}
		cout << sum << endl ; 
	}
	return 0;
}
