#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;

    while (n--) {
        string s, t;
        cin >> s >> t;

        string result;
        int s1 = s.size();
        int t1 = t.size();
        int total=s1+t1;



        for(int i=0;i<total-1;i++)
        {
            if(s1>0){
            result+=s[i];
            s1--;}
            if(t1>0){
            result+=t[i];
            t1--;}
        }

        cout << result << endl;
    }

    return 0;
}
