#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, sum=0, count = 0, g = 0;
    string s;
    cin >> s;
    t= s.length();
    for(g=0;g<t;g++){
        if(s[g]=='H'||s[g]=='Q'||s[g]=='9'){
            cout << "YES" <<endl;
            return 0;
        }
        
    }
    cout << "NO" <<endl;
    
}