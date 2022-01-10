#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            sum+=(a[i+1]-a[i]);
        }
        // for(int i=0;i<n;i++){
        //     cout<<a[i];
        // }
        cout<<sum<<endl;
    }
}
