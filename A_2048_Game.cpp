#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            if(a<=2048)
            m[a]++;
        }
        int i;
        int cnt=0,p=0;
        for(auto it:m){
            m[2*it.first]+=it.second/2;
        }
        // for(auto it:m)
        // cout<<it.first<<" "<<it.second<<endl;
        // cout<<m[2048];
        if(m[1024]>=2||m[2048]>0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}