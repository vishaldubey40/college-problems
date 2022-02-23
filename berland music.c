#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],count = 0;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        string s;
        cin >> s;
        map<int,char> m;
        map<int,int> m1;
        for(int i=0;i<n;i++)
        m[arr[i]]=s[i];
        int ia=0;
        for(auto it:m){
            if(it.second=='0'){
                ia++;
                m1[it.first]=ia;
            }
        }
        
        for(auto it:m){
            if(it.second=='1'){
                ia++;
                m1[it.first]=ia;
                // cout <<arr[i] <<" " << m1[arr[i]]<<" ";
            }
        }
        for(int i=0;i<n;i++){
            cout<<m1[arr[i]]<<" ";
        }cout << endl;
    }
}
