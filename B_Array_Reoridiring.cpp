#include<bits/stdc++.h>


using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int> ans;
    ans.push_back(v[0]);
    for(int i=1;i<n;i++){
        int val = ans[i-1]+ v[i];
        if(v[i]==0) {ans.push_back(val); continue;}
        if(ans[i-1]>=v[i]) {
            cout<<"-1"<<endl;
            return;
        }
        ans.push_back(val);
    }
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}
