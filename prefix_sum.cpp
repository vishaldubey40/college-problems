#include <bits/stdc++.h>

using namespace std;

const int n= 1e5 + 7;
int ar[n];
int pf[n];
//using hashing find sum of array in given interval

int main() {
    int t;
    cin >> t;
    for( int i =1 ;i<=t ; i++){
        cin>>ar[i];
        pf[i]=pf[i-1]+ar[i];
    }
    int q;
    cin >> q;
    while (q--){
        int l, r;
        cin >> l >>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }
}
