#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ct=arr[0];
        for(int i=1;i<n;i++)
        ct&=arr[i];
        cout << ct <<endl;
}
}
