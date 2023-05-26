#include <bits/stdc++.h>
using namespace std;
int digitSum(int x){
	int sum = 0 ; 
	while(x){
		sum += x%10 ; 
		x/=10 ; 
	}
	return sum; 
}

int main()
{
	int n,a,b;
	cin >> n >> a >> b ; 
	if(a>b) swap(a,b);
	int ans = 0 ; 
	for(int i=1 ; i<= n ; i++){
		int dSum = digitSum(i); 
		if(dSum >= a and dSum <= b){
			ans += i ; 
		}
	}
	cout << ans << endl;
	return 0;
}