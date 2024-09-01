// CP_31 (800) Halloumi Boxes

#include <bits/stdc++.h>
using namespace std;

vector<int> readvec(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

void solve(vector<int>& v, int k) {
    if (k == 1 && !is_sorted(v.begin(), v.end())) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v = readvec(n);
        solve(v, k);
    }
    return 0;
}