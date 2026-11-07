#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,c;
        cin>>n>>x>>c;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mx=0;
        for(int i=0;i<n;i++){
            mx+=max(a[i],x-c);
        }
        cout<<mx<<endl;
    }
}