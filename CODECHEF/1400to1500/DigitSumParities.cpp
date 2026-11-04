#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n,a,m=0;
        cin>>n;
        a=n;
        while(a>0){
            if(a%10==9) m++;
            else break;
            a/=10;
        }
        if(m%2==0){
            cout<<n+1<<endl;
        }
        else{
            cout<<n+2<<endl;
        }
    }
}
