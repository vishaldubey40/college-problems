#include <bits/stdc++.h>

using namespace std;
int binaExp(int a, int b){
    if(b==0)
    return 1;
    long long int res = binaExp(a,b/2);
    if(b&1){
        return a*res*res;
    
    }else
    return res*res;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k = log2(n-1);
        long long int a = binaExp(2,k);
        for(int i =a-1 ; i >= 0 ; i--){
            cout << i <<" ";
        }
        for(int i=a;i<n;i++)
        cout << i <<" ";
        cout <<endl;
    }
}
