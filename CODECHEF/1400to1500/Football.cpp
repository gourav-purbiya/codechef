#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int mx=0,points=0;
        for(int i=0;i<n;i++){
            points = (a[i]*20)-(b[i]*10);
            mx=max(mx,points);
        }
        cout<<mx<<endl;
    }
}