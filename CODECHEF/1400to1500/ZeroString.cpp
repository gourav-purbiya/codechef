#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (char c : s) {
            if (c == '0') c0++;
            else c1++;
        }
        int ans = min(c1,1+c0);
        cout << ans << "\n";
    }
}
