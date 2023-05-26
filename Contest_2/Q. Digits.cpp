#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t ; 
	while(t--){
		string a ; 
		cin >> a ; 
		for(int i=a.size()-1 ; i >= 0 ; i--) {
			cout << a[i] << " " ;
		}
		printf("\n");
	}	
	return 0;
}