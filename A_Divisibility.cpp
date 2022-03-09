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
//cin>>t;
while(t--){
int k, a, b;
cin >> k >> a >>b;
if(a>=0&&b>=0){
    if(a%k==0)
    cout << (b/k) - (a/k)+1;
    else 
    cout << (b/k) - (a/k) ;
}else if(a<=0&&b<=0){
    if(abs(b%k)==0){
        cout << abs(a/k) -  abs(b/k)+1;
    }else
    cout << abs(a/k) - abs(b/k) ;
}else if(a<0&&b>0){
    int ans =abs(abs(a/k) + abs(b/k));
        cout << ans + 1<< endl;
}
}
return 0;
}
