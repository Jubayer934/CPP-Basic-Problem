#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a=0,b=1;
	cin >> n ; 
	if(n==1) printf("0");
	else{
		printf("0 1") ; 
		for(int i=3 ; i <= n ; i++ ){
			long long now = a + b ; 
			cout <<" "<<now; 
			a = b , b = now; 
		}
	}
	return 0;
}