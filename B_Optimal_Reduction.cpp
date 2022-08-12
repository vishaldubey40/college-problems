#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin >> arr[i];
        vector<int> v;
        if(n==1||n==2){
            cout<<"YES"<<endl;
            continue;}
        
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1])
                v.push_back(arr[i]);
        }
        v.push_back(arr[n-1]);
        if(v.size()==0||v.size()==1)
        { cout<<"YES"<<endl;
        continue;
        }
        bool check=0;
        int k = v.size();
        // cout<<k<<endl;
        for(int i=1;i<=k-2;i++){
            if(v[i-1]>v[i]&&v[i]<v[i+1]){
            check =1;
            break;}
        }
        if(check)
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        }
}