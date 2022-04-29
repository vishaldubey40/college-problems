#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--){
       long long int n;
        cin >> n;
        vector<long long int> v(n);
        long long int cnt=0,one=0,two=0;
        for(long long int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]%2!=0)
            cnt++;
            if(v[i]==0)
            one++;
            if(v[i]==1)
            two++;
        }
        sort(v.begin(),v.end());
        if(n==1)
        cout<<"YES"<<endl;
        else if(cnt==n){
            cout<<"YES"<<endl;
        }else if(one>0&&two>0){
            cout<<"NO"<<endl;
        }else if(v[0]==1)
        { int cp=0;
            for(int i=0;i<n-1;i++){
            if(v[i+1]-1==v[i]){
                cp++;
                break;
            }            
        }
        if(cp==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
}