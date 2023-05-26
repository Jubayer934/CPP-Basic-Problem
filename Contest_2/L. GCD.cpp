#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p,q ; 
	cin >> p >> q ; 
    while (p != q) {
        if (p > q) {
            p -= q;
        } else {
            q -= p;
        }
    }
	cout << p << endl ; 
	
	//cout << __gcd(p,q) << endl;
	return 0;
}