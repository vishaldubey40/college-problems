#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n==5){
            int a=0,b=0,cnt=0,c=0,d=0;
            for(int i=0;i<5;i++){
                if(s[i]=='T')
                a++;
                if(s[i]=='i')
                cnt++;
                if(s[i]=='m')
                b++;
                if(s[i]=='u')
                c++;
                if(s[i]=='r')
                d++;

            }
            if(a&&b&&c&&d&&cnt)
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
}