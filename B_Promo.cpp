#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n, m;
    cin >> n>> m;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    vector<long long    int> v(n+1);
    v[0]=0;
    for(long long int i=1;i<=n;i++)
    v[i] = v[i-1] + arr[i-1];
    while(m--){
        long long int a, b;
        cin >> a >> b;
        int k = a - b;
        cout<<v[a] - v[k]<<endl;;
    }
}