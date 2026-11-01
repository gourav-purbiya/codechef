#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    int sum1=a+b;
	    int sum2=b+c;
	    int sum3=c+a;
	    if((sum1<=d && c<=e) || (sum2<=d && a<=e) || (sum3<=d && b<=e)){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}