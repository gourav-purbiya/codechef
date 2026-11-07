#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s.back() == '0') {
        int o = count(s.begin(), s.end(), '1');
        cout << o << "\n";
        return;
    }

    int zr = count(s.begin(), s.end(), '0');
    int ol = 0;
    int ans = zr;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ol++;
        } else {
            zr--;
        }
        ans = min(ans, ol + zr);
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}