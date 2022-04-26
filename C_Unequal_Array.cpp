#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans =0;
        for(int i=0;i<n;i++){
        if(v[i]==v[i+1])
        ans++;
        }
        if(ans<=1){
            cout<<0<<endl;
            continue;
        }
        int a1,b1;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                a1=i+1;
                break;
            }
        }
            for(int i=n-1;i>0;i--){
            if(v[i]==v[i-1]){
                b1=i-1;
                break;
            }
            }
    if(b1-a1==0)
    cout<<1<<endl;
    else
    cout<<b1-a1<<endl;
    }
    
    }
