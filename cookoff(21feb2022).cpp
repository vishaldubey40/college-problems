#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--){
        long long int n, a;
        cin >> n >> a;
       if(n>=a&&abs(n-a)!=1){
        for(long long int i=1;i<=a;i++){
            cout << i <<" ";
        }
        for(long long int i=a+1;i<n;i++)
        cout << i+1 <<" ";
       if(a!=n)
        cout << a+1<<" ";
        cout << endl;
    }
    else
    {  cout << n <<" ";
        for(int i=2;i<n;i++)
        cout <<i <<" ";
        cout << 1 <<" ";
        cout <<endl;
    }
}
}
