#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int k = log10(n);
        long long int j = 1;
        while(k--){
            j=j*10;
        }
        long long int p = n - j;
        cout<<n-j<<endl;

    }
}