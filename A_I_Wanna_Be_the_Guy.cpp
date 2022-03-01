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
vector<int> v(300);

int32_t main(){
fast


// Fuck Ratings, I'm in Love with Experience.
// Once a Charas, Always a CHARAS.


int t;
cin >> t;
int n;
cin >> n;
rep(i,n){
int s;
cin >> s;
v[s] = 1; 
}
int m;
cin >> m;
rep(i,m){
    int b;
    cin >> b;
    v[b]=1;
}
int ct = 0;
for(int i=1;i<=t;i++)
if(v[i]==0)
ct++;
if(ct==0)
cout << "I become the guy.";
else
cout <<"Oh, my keyboard!";
return 0;
}
