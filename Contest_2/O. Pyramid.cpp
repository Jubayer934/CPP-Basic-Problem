#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ; 
	cin>>n;
	for(int j=1 ; j <= n ; j++){
		for(int i=1 ; i <= j ; i++ ){
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}