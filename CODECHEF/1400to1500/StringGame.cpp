#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        bool is = true;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a[26]={0};
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]%2!=0){is=false;
            break;}
        }
        if(is){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}