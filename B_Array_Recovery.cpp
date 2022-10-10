#include<bits/stdc++.h>

using namespace std;

void solve(){
   
        int n, m;
        cin >> n >> m;
        int dif = abs(n-m);
        if(dif==0) {cout<<0<<endl; return;}
        for(int i=1;;i++){
            int ans = i*(i+1);
            ans=ans/2;
            if(dif%2 != ans%2) continue;
            if(dif > ans) continue;
            cout<<i<<endl; return;
        }
}

int main(){
     int t;
    cin >> t;
    while(t--){
    solve();
    }
}
