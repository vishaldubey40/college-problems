#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n],c[n],d[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            c[i] = a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            d[i] = b[i];    
        }
        vector<pair<int,int>> v;
        if(is_sorted(a,a+n)&&is_sorted(b,b+n))
            cout<<0<<endl;
        else {
            sort(c,c+n);
            sort(d,d+n);
            // int cnt = 0;
            for(int i=0;i<n;i++){
                int k = c[i];
                int l = d[i];
                // cout<<k<<endl;
                for(int j=i;j<n;j++){
                    if(a[j]==k&&b[j]==l){
                        if(i==j) continue;
                        swap(a[i],a[j]);
                        v.push_back({j+1,i+1});
                        swap(b[i],b[j]);
                        // cnt++;

                        // break;
                    }
                }
            }
            if(is_sorted(a,a+n)&&is_sorted(b,b+n)){
                cout<<v.size()<<endl;
                for(auto it:v){
                    cout<<it.first<<" "<<it.second<<endl;
                }
            }else
            cout<<"-1"<<endl;
            
        }
    }
}