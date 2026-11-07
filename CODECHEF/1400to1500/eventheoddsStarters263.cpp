#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int oc = 0, f = -1, l = -1;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 != 0) {
                oc++;
                if (f == -1) f = i;
                l = i;
            }
        }
        
        if (oc % 2 == 0) {
            cout << n << "\n";
        } else {
            int ans = max(n - 1 - f, l);
            cout << ans << "\n";
        }
    }
    return 0;
}