#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        bool is = true;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ncount=0,ycount=0,icount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                icount++;
                cout<<"INDIAN\n";
                break;
            }
            if(s[i]=='N'){
                ncount++;
            }
            else if(s[i]=='Y'){
                ycount++;
            }
        }
        if(ycount==0 && icount==0){
            cout<<"NOT SURE\n";
        }
        else if(icount==0){
            cout<<"NOT INDIAN\n";
        }
        
    }
}
