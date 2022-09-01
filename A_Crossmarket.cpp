#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n==1&&m==1){
            cout<<0<<endl;
            continue;
            
        }
        if(n>m)
        swap(n,m);
        int k = 2*(n-1)+(m-1) + 1;
        cout<<k<<endl;
    }
}