#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        bool possible = true;
        for (auto p : mp) {
            int group_size = p.first;
            int count = p.second;
            if (count % group_size != 0) {
                possible = false;
                break;
            }
        }
        if(possible){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}