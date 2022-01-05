#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>f;
        e=(a-b)-(c+d+f);
        if(e<0){
            cout<<"NO"<<endl;
        }else
        cout<<"YES"<<endl;
    }
}
