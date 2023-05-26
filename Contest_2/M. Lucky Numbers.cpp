#include <bits/stdc++.h>
using namespace std;
bool lucky(int x){
	while(x){
		int rem= x%10 ; 
		if(!(rem==4 or rem==7)) return false ;  
		x/=10 ; 
	}
	return true;
}

int main()
{
	int a,b;
	cin >> a >> b ; 
	if(a>b) swap(a,b);

	bool flag=true;  
	for(int i=a ; i<= b ; i++){
		if(lucky(i)==true){
			cout << i << " " ; 
			flag = false; 
		}
	}
	if(flag) cout << -1 << endl; 
	
	return 0;
}