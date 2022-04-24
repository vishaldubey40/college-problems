#include <bits/stdc++.h>

using namespace std;

vector<string> val;

void genrate(string &s, int open, int close){
    if(open==0&&close==0){
        val.push_back(s);
        return;
    }
    if(open>0){
        s.push_back('(');
        genrate(s,open-1,close);
        s.pop_back();
    }
    if(close>0){
        if(open<close){
            s.push_back(')');
            genrate(s,open,close-1);
            s.pop_back();
        }
    }
}



int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        genrate(s,n,n);
        for(int i=0;i<n;i++)
        cout<<val[i]<<endl;
        
    }
}
