#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int l,b;
        cin>>l>>b;
        for(int i=0;i<10000;i++){
            if(i%2!=0){
                l-=i;
                if(l<0){
                    cout<<"bob"<<endl;
                    break;
                }
            }
            else{
                b-=i;
                if(b<0){
                    cout<<"limak"<<endl;
                    break;
                }
            }
        }
    }

}
