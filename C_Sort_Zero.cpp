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
        cin>> arr[i];
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        map<int,int> m;
        for(int i=0;i<n;i++)
        m[arr[i]]++;
        int cnt=-1;
        for(int i=n-1;i>0;i--){
            if(arr[i]>=arr[i-1]){
                continue;
            }else{
                cnt=i;
                break;
            }
        }
        if(cnt==-1){
            cout<<0<<endl;
            continue;
        }
        map<int,int> in,ni;
        for(int i=n-1;i>=0;i--){
            in[arr[i]]=i;
        }
        // for(auto it:in)
        // cout<<it.first<<" "<<it.second<<endl;
        int a=0;
        for(int i=n-1;i>=cnt;i--){
            if(m[arr[i]]==1)
            a++;
            else if(in[arr[i]]>=cnt)
            ni[arr[i]]++;
            else break;
        }

        cout<<m.size()-a-ni.size()<<endl;
    }
}