#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        string d;
        cin>>s;
        cin>>d;
        int scount = 0,dcount = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                scount++;
            }
        }
        for(int i=0;i<n;i++){
            if(d[i]=='1'){
                dcount++;
            }
        }
        if(scount == dcount){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}