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
const int N=1e6;
vector<int> v(N);
int32_t main(){
fast


// Fuck Ratings, I'm in Love with Experience.
// Once a Charas, Always a CHARAS.


int k, l, m, n, d;
cin >> k >> l >> m >> n >> d;
if(k==1||l==1||m==1||n==1)
cout << d << endl;
else
{   int ans=0;
           
          for(int i=1;i<=d;i++)
             { 
              v[i*l] = 1;
              v[i*k] = 1;
              v[i*m] = 1;
              v[i*n] = 1;
             }
          
          int cnt =0;
          for(int i=1;i<=d;i++){
              if(v[i]==1)
              cnt++;
          }
          cout << cnt << endl;
   }
    return 0;
}
