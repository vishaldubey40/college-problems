#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    string p;
    map<string,int> m;
    while(t--){
        string s;
        cin>>s;
        m[s]++;
    }
    int max=0;
    for(auto pr:m){
        if(pr.second>max){
            max=pr.second;
            p=pr.first;
        }
    }
    cout<<p<<endl;
}
