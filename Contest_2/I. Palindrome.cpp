#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin >> a ; 
	string b="";
	bool ok = true; 
	
	int sz = a.size() - 1; 
	for(int i=0 ; i < sz/2  ; i++){
		if(a[i]!=a[sz-i]){
			ok = false; 
			break;
		}
	}
	bool zero = false; 
	for(int i=sz ; i >= 0 ; i--){
		if(a[i]!='0'){
			cout << a[i] ;
			zero = true; 
		}
		if(zero and a[i]=='0') cout<<"0";  
	}
	
	cout << (ok ? "\nYES" : "\nNO") << endl;
	return 0;
}