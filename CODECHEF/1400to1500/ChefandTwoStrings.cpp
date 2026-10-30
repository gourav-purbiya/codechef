#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int max=0,min=0;
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        for(int i=0;i<s1.size();i++){
        if(s1[i]=='?'||s2[i]=='?'){
            max+=1;
        }
        else if(s1[i]!=s2[i]){
            min+=1;
            max+=1;
        }
    }
        cout<<min<<" "<<max<<endl;
    }
}
