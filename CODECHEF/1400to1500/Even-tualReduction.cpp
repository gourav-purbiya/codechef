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

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        bool is = true;
        for(int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                is = false;
                break;
            }
        }

        if (is) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
}
}