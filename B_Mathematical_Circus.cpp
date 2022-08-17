#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        // 11 2 13 4 15 6 17 8 19 10 21 12
        //2 4 6 8 10 12 14 1 3 5 7 9 11 13
        // long long int k= n*m;
        if(m%4==0){
            cout<<"NO"<<endl;
        }else{
            int eve = n/2;
            vector<int> v;
            for(int i=1;i<=n;i++)
            if(i%2==0)
            v.push_back(i);
            for(int i=1;i<=n;i++)
            if(i%2!=0)
            v.push_back(i);
            if(m%2==0){
                map<int,int> m;
                int j=1,p=n/2;
                for(int i=0;i<n/2;i++){
                    if(j%2!=0){
                        m[v[i]] = v[i+p];
                        // j++;
                    }else
                    m[v[i+p]]=v[i];
                    j++;
                }
                cout<<"YES"<<endl;
            for(auto it:m){
                cout<<it.first<<" "<<it.second<<endl;
            }}else{
                map<int,int> m;
                int j=1,p=n/2;
                for(int i=0;i<n/2;i++){
                    // if(j%2==0){
                        m[v[i+p]] = v[i];
                        // j++;
                    // }else                   // 2 4 1 3
                    // m[v[i+p]]=v[i];
                    // j++;
                }
                cout<<"YES"<<endl;
            for(auto it:m){
                cout<<it.first<<" "<<it.second<<endl;
            }
            }

        }
    }
}