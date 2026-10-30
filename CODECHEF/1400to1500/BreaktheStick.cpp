#include <bits/stdc++.h>
using namespace std;
bool iseven(int x){
    return x%2 == 0;
}
int main() {
	int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(iseven(n)){
            cout<<"YES"<<endl;
        }
        else{
            if(iseven(k)){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }
}
    