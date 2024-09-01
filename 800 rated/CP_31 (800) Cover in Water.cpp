// CP-31 (800) Cover in water

#include<bits/stdc++.h>
using namespace std;

void solve(string s, int n) {
    bool flag = false;
    for(int i=0; i+2<n; i++) {
        if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.') {
            flag = true;
            break;
        }
    }
    if(flag==true) {
        cout << 2 << endl;
    } else {
        int count = 0;
        for(int i=0; i<n; i++) {
            if(s[i]=='.') {
                count++;
            }
        }
        cout << count << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        int n;
        cin >> s >> n;
        solve(s, n);
        }
    return 0;
}