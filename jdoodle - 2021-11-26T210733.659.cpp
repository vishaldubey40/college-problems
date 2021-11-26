#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        if(a%k==0&&b%k==0){
            cout<<"YES"<<endl;
        }else
        cout<<"NO"<<endl;
    }
}