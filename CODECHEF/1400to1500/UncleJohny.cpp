#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int k,n,j;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) {cin>>a[i];}
        cin>>k;
        int m = a[k];
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++){
            if(a[i]==m){
                j=i;
            }
        }
        cout<<j<<endl;
    }
}