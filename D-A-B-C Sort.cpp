#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=n-2;i>=0;i-=2)
            if(a[i]>a[i+1])
                swap(a[i],a[i+1]);
        if(is_sorted(a,a+n)) cout<<"YES"<<endl; else cout<<"NO"<<endl;
    }
}
