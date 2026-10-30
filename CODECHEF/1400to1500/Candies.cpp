#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        int p;
        cin>>n;
        map<int,int> m;
        bool is =true;
        for(int i=0;i<2*n;i++){
            cin>>p;
            m[p]++;

        if(m[p]>2){
            is = false;
        }
    }
        if(is){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
}
        
        

