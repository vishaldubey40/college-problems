#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],count = 0, even = 0, odd = 0;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            if(arr[i]%2==0){
                even++;
            }
            }
            sort(arr,arr+n);
            for(int i=0;i<n;i++){
                if(arr[i+1]-arr[i]==1){
                    count++;
                }
            }
        odd= n - even;
        int echeck, odcheck;
        echeck =even - count ;
        odcheck =odd - count;
        // cout << echeck <<" " << odcheck <<endl;
        if(echeck < 0)
        echeck = 0;
        if(odcheck < 0)
        odcheck = 0;
        if(count >= 1||(even%2==0 || odd%2==0)){
            cout << "YES" <<endl;
        }else
        cout <<"NO" <<endl;
    }
    
}
    
