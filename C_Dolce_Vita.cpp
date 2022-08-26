#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, m;
        cin >> n >> m;
        long  int arr[n];
        for(int i=0;i<n;i++)
        cin >> arr[i];
        sort(arr,arr+n);
        long long int ans = 0;
        long long int  sum=0;
        for (int i = 0; i < n; ++i){
      sum += arr[i];
      if(sum <= m){
        ans += (m - sum)/(i + 1) + 1;
      }
    }
        cout<<ans<<endl;

    }
}