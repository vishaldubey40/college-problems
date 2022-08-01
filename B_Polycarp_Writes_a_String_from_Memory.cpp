#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char,int> m;
        int cnt=0,k=0;
        for(int i=0;i<s.length();i++){
            if(m.size()<=3){
            m[s[i]]++;
            }
            if(m.size()>3){
                    cnt++;
                    m.erase(m.begin(),m.end());
                    i=i-1;
            }
            }
            if(m.size()==0)
        cout<<cnt<<endl;
        else
        cout<<cnt+1<<endl;
           }
}