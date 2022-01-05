#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int c,d,e,f;
        c=(n+1)/2;
        f=abs(a-b);
        if(a==b||abs(c-a)==abs(c-b)||(a+b)%2==0){
            cout<<0<<endl;
        }else
        cout<<1<<endl;
        
    }
}
