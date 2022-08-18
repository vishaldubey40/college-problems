#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[n], comp[n];
        for(int i=0;i<n;i++){
        cin >> arr[i];
        comp[i]=arr[i];
        }
        if(n==m){
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        sort(comp,comp+n);
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++)
            if(arr[j]==comp[i])
            ans++;
        }
        cout<<m-ans<<endl;
    }
}