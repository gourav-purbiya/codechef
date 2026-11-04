#include <bits/stdc++.h>

using namespace std;

int main() {
    int h;
    cin>>h;
    while(h--){
        int n;
        int sum = 0;
        cin>>n;
        vector<int> q(n);
        vector<int> p(n);
        for(int i=0;i<n;i++){
            cin>>q[i]>>p[i];
        }
        vector<int> t(12);
        for(int i=0;i<n;i++){
            t[q[i]]=max(t[q[i]],p[i]);
        }
        for(int i=0;i<9;i++){
            sum+=t[i];
        }
        cout<<sum<<endl;
    }
}