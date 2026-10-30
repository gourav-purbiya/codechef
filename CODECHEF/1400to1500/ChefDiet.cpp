#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
            bool is = true; 
        int n,k;
        int value;
        cin>>n>>k;
        value = k;
        int fd,stored=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            stored+=a[i];
            if(stored<k){
                is=false;
                fd=i+1;
                break;
            }
            stored-=k;
        }
        if(is){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<" "<<fd<<endl;
        }
    }
    
}
