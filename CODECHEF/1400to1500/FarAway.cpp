#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        long long n,m,mx=0,y=0;
        cin>>n>>m;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            mx=max(m-a[i],a[i]-1);
            y+=mx;
        }
        cout<<y<<endl;
    }
}
