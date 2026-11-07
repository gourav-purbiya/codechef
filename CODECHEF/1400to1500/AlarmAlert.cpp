#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, d;
        cin>>x>>y>>d;
        long long a=x,b=y;
        while(abs(a-b)>d){
            if(a<b){
                a+=x;
            }else{
                b+=y;
            }
        }
        long long ans=max(a, b);
        cout<<ans<<"\n";
    }
}