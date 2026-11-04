#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        int c=abs(a-b);
        cout<<(c%(2*x)==0?"YES":"NO")<<endl;
    }
}
