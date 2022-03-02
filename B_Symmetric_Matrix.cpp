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


int t;
cin>>t;
while(t--){
int n, m;
cin >> n >> m;
int k=2*n;
int ct1 = 0,ct2 = 0,cn = 0;
    int a, b, c, d;
// cout << m <<endl;
for(int i=0;i<n;i++){
    cin >> a >> b >>c >> d;
    if(a==b&&b==c&&c==d)
    cn++;
    if(b==c)
    ct1++;
     else if(b==c&&a==d)
     ct2++;
}
// cout << m <<endl;
if(m%2!=0)
cout <<"NO"<<endl;
else{
    if(cn==1)
    cout <<"YES"<<endl;
    else if(ct1>0||ct2>0)
    cout <<"YES"<<endl;
    else cout <<"NO" <<endl;

}
}
return 0;
}
