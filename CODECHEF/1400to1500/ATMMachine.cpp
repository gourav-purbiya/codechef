#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,k;
    while(t--){
	cin>>n>>k;
	int a[n];
	int value=k;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n;i++){
	    if(a[i]<=value){
	        cout<<"1";
	        value=value-a[i];
	    }
	    else{cout<<"0";}
	}
	cout<<endl;
    }
}
