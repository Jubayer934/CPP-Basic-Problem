#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin >> n ; 
	for(int i=1 ; i <= n*4 ; i++){
		if(i%4==0) printf("PUM\n");
		else printf("%d ", i); 
	}	
	return 0;
}