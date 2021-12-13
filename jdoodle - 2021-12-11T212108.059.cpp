#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        string s;
        cin>>s;
        int count=0,p=0,i=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count++;
                if(count==a){
                    p++;
                    count=0;
                }
            }
            if(s[i]=='1'){
                count=0;
            }
            int y=i;
            int g=y+1;
            //  if(g%a==0&&a>3){
            //      y=y-1;
            //  }
            //  i=y;
        }
        cout<<p<<endl;
    }
    
}