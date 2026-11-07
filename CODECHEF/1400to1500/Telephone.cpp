#include <bits/stdc++.h>
using namespace std;

int calc(vector<int>& v,int mx) {
    bool ok = false;
    for (int x : v){
        if (x == mx) ok = true;
    }
    if (!ok) return -1;
    int cnt = 0, ans = 0, m = v.size();
    for (int i = 0; i < 2 * m; i++) {
        if (v[i % m] < mx) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    if (n % 2 != 0) {
        for (int i = 0; i < n; i++) a.push_back(a[i]);
    }
    vector<int> o, e;
    for (int i = 0; i < (int)a.size(); i++) {
        if (i % 2 == 0) o.push_back(a[i]);
        else e.push_back(a[i]);
    }
    int c1 = calc(o, mx);
    int c2 = calc(e, mx);
    if (c1 == -1 || c2 == -1) cout << -1 << "\n";
    else cout << max(c1, c2) << "\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}