#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s,m;
        cin >> s >> m;
        reverse(m.begin(),m.end());
        reverse(s.begin(),s.end());
        vector<int> v;
        int k=0;
        for(int i=0;i<m.length();i++){
            for(int j=0;j<s.length();j++){
                if(m[i]==s[j]){
                    int temp=0;
                    for(int k=0;k<v.size();k++)
                    if(v[k]==j){
                        temp++;break;
                    }
                    if(!temp){
                    v.push_back(j);
                    break;
                    }
                }
            }
        }
        if(v.size()==0){
            cout<<"NO"<<endl;
            continue;
        }
        int ans=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]<v[i+1])
            continue;
            else{
                ans++;break;
            }
        }
        // for(int i=0;i<v.size();i++)
        // cout<<v[i]<<" ";
        if(ans||v.size()!=m.length())
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
}