#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s,s1;
        cin >> s >> s1;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='G'&&s1[i]=='B')
            continue;
            else if(s[i]=='B'&&s1[i]=='G')
            continue;
            else if(s[i]==s1[i]) continue;
            else{ cnt++; break;}

        }
            // for(int i=0;i<n;i++){
            //     if(s[i]=='G')
            //     s1[i]='B';
            // }
        if(!cnt)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}