#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int ddsa, dtoc, ddm;
    int sdsa, stoc, sdm;
    
    while(t--) {
        cin >> ddsa >> dtoc >> ddm;
        cin >> sdsa >> stoc >> sdm;
        
        int dt = ddsa + dtoc + ddm;
        int st = sdsa + stoc + sdm;
        
        if (dt > st) {
            cout << "DRAGON\n";
        } 
        else if (dt < st) {
            cout << "SLOTH\n";
        } 
        else {
            if (ddsa != sdsa) {
                if (ddsa > sdsa) cout << "DRAGON\n";
                else cout << "SLOTH\n";
            } 
            else if (dtoc != stoc) {
                if (dtoc > stoc) cout << "DRAGON\n";
                else cout << "SLOTH\n";
            } 
            else {
                cout << "TIE\n"; 
            }
        }
    }
    return 0;
}
