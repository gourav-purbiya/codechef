#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,mx=0;
        cin>>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            m[num]++;
            mx=max(mx,m[num]);
        }
        cout<<n-mx<<endl;
    }
}