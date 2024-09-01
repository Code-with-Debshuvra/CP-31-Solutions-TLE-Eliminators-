// CP-31 (800) Line Trip

#include <bits/stdc++.h>
using namespace std;

vector<int> readvec(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

void solve(vector<int>& v, int n, int x) {
    // Start with max distance as the maximum of the first station's distance from 0 and last station's distance from x
    int max_dist = max(v[0], 2*(x - v[n - 1]));
    
    // Iterate through the array to find the maximum distance between consecutive stations
    for (int i = 1; i < n; i++) {
        max_dist = max(max_dist, v[i] - v[i - 1]);
    }
    
    // Print the final max distance, which is the minimum required tank capacity
    cout << max_dist << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v = readvec(n);
        solve(v, n, x);
    }
    return 0;
}
