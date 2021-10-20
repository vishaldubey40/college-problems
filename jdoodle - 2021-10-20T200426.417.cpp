#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        int k=x*3-(n-x);
        if(k>=p){
            cout<<"PASS\n";
        }else
        cout<<"FAIL\n";
    }
}