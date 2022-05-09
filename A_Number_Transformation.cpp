#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(b%a==0){
            int k = b/a;
            cout<<1<<" "<<k<<endl;
        }else
        cout<< 0 <<" "<<0<<endl;
    }
}