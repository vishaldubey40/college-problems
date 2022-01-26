#include <bits/stdc++.h>

using namespace std;

const int n= 1e3 + 7;
int ar[n][n];
int pf[n][n];
//using hashing find sum of array in given interval

int main() {
    int t , m;
    cin >> t >> m;
    for( int i =1 ;i<=t ; i++){
    for( int j = 1; j<=m ; j++){
         cin >> ar[i][j];
        pf[i][j] = ar[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
    }
    }
    int q;
    cin >> q;
    while (q--){
        int l, r, a, b;
        cin >> l >> r >> a >> b;
        cout<<pf[a][b] - pf[l-1][b] - pf[a][r-1] + pf[l-1][r-1] << endl;
    }
}
