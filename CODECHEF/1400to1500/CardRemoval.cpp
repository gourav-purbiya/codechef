#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> freq(11, 0);
    
    int max_freq = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
        max_freq = max(max_freq, freq[a]);
    }
    
        cout << n - max_freq << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}