#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c && a>50){
            cout<<"A\n";
        }
        if(b>a && b>c && b>50){
            cout<<"B\n";
        }
        if(c>b && c>a && c>50){
            cout<<"C\n";
        }
        else if(a<=50 && b<=50 && c<=50){
            cout<<"NOTA\n";
        }
    }
}
