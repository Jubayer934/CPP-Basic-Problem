#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    map<char, int>Count;
    int n=s.size();
    for (int i=0;i<n;i++) {
        Count[s[i]]++;
    }
    for (auto entry : Count) {
        cout << entry.first << " : " << entry.second << endl;
    }

    return 0;
}
