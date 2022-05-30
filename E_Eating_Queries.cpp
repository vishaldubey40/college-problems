#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
if(n==1) return false;
if(n==2) return true;
for(int i=2;i*i<=n;i++){
if(n%i==0)return false;
}
return true;
}

int32_t main(){
fast


// Fuck Ratings, I'm in Love with Experience.
// Once a Charas, Always a CHARAS.


int t=1;
cin>>t;
while(t--){
 int n, q;
 cin >> n >> q;
 int a[n];
 for(int i=0;i<n;i++)
 cin >> a[i];
sort(a,a+n,greater<int>());
int arr[n+1];
arr[0]=0;
for(int i=0;i<n;i++){
    arr[i+1] = arr[i] + a[i];
 }

  
while(q--){
    int a;
    cin >> a;
    
        int a1 = lower_bound(arr,arr+n+1,a)-arr;
        if(arr[a1] >=a&&a1<=n){
        cout<<a1<<endl;
        }
        else cout<< "-1"<<endl;
    
}
}
return 0;
}
