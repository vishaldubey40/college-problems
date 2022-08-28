#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a;
        cin >> a;
        n--;
        long long int ans = 0, b;
        while(n--){
            cin>>b;
            if(a*b>0){
                if(a<b) a=b; 
            }else{
                ans+=a; a=b;
            }
        }
        cout<<ans+a<<endl;}
    }
