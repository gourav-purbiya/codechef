#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int c = 0;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='<' && s[i+1]=='>'){
                c++;
            }
        }
        cout<<c<<endl;
    }
}