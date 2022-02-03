#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int i,j;
        i=arr[n-1],j=arr[n-2];
        int k=x/(j+i);
        if(x%(j+i)==0){
            cout << 2*k <<endl;
        }else if(x%(j+i)<= i){
            cout << 2*k+1 <<endl;
        }else cout << 2*k+2 <<endl;
    }
}
