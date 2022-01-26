#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >>b;
        int arr[a+2];
        int fr[a+10];
        int bc[a+10];
        fr[0] = bc[a+1] =0;
        
        for(int i=1 ; i<=a ;i++)
        cin >> arr[i];
        for( int i = 1; i<=a ;i++)
        fr[i] = __gcd( fr[i-1], arr[i]);
        for( int i = a; i>=1 ; i--)
        bc[i] = __gcd( bc[i+1] ,arr[i]);
        while(b--){
            int c, d;
            cin >> c >> d;
            int gc=__gcd( fr[c-1], bc[d+1] ) ;
            cout << gc << endl;
        }
    }
}
