#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n ; 	
	for(int i=1 ; i <= n ; i++){
		for(int j=i ; j < n; j++){
			printf(" ");
		}
		for(int j=1 ; j <= i*2-1 ; j++){
			printf("*");
		}
		printf("\n");
		
	}
	for(int i=n ; i >= 1 ; i--){
		for(int j=i ; j < n; j++){
			printf(" ");
		}
		for(int j=1 ; j <= i*2-1 ; j++){
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}