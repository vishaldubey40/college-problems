#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,ma;
        cin >> n >> ma;
        multimap<int,int> m;
        vector<int> v;
        for(int i=0;i<2*n;i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
            int min1=v[0];
        for(int i=0;i<n;i++){
            m.insert({v[i],v[i+n]});
            if(i!=n-1)
            min1=min(min1,v[i+1]);
            // cout<<min<<" ";
        }
        multimap<int,int,greater<int>> m1;
        for(auto it:m){
            if(it.first==min1)
            m1.insert({it.second,it.first});
        }
            // for(auto it:m1)
            // cout<<it.first<<" "<<it.second<<endl;
        int ans = 0, cnt = 0;
            int p=0;
            int i,j;
        for(auto it:m1){
            if(p==0){
                j=it.first;
                i=it.second;
                p++;
                // cout<<i<<" "<<j;
            }
            while(ma>=i){
            ans+=ma/i;
            int k=ma/i;
            ma = (ma - (k*i));
            ma+=k*j;
            // cout<<ma<<endl;
                
            }
            if(ma<i)
            break;
        }
        cout<<ans <<endl;
    }
}
