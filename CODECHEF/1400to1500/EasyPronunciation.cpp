#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int count =0;
        for(int i=0;i<n;i++){
            if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'){
                count++;
                if(count==4){
                    break;
                }
            }
            else{count=0;
                continue;
            }
        }
        if(count>=4){
            cout<<"no"<<endl;
        }
        else{cout<<"yes"<<endl;}
        
    }
}
