#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[m];
        vector<int> v;
        for(int i=0;i<m;i++){
            cin >> arr[i];
        }
        if(n==m){
            cout<<n<<endl;
            continue;
        }
        sort(arr,arr+m);
        for(int i=0;i<m-1;i++){
            v.push_back(arr[i+1]-arr[i]-1);
        }
        v.push_back(n-arr[m-1]+(arr[0]-1));
        sort(v.begin(),v.end(),greater<int>());
        int ct=0;
        int ans=0;
        // for(int i=0;i<v.size();i++)
        // cout<<v[i]<<" ";
        // cout<<endl;
        for(int i=0;i<v.size();i++){
            if(v[i]==0)
            break;
            if(v[i]<2*ct+1&&i!=0)
            ans+=v[i];
            else if(i==0)
            ans+=(1);
            else
            ans+=(ct*2+1);
            // cout<<ans<<" "<<ct<<endl;
            if(v[i]==ct*2+1)
            {ans-=1;
            ct+=1;
            }else
            ct+=2;
            // cout<<ans<<" "<<ct<<endl;
        }
        cout<<ans+m<<endl;

    }
}