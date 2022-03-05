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
const int N=1e7;

vector<int> v(N);
int32_t main(){
fast


// Fuck Ratings, I'm in Love with Experience.
// Once a Charas, Always a CHARAS.


int t=1;
cin>>t;

while(t--){
int n;
cin >> n;
rep(i,n+1)
v[i]=0;
int arr[n];
rep(i,n)
    cin >> arr[i];
    
     sort(arr,arr+n);
  for(int i=0;i<n;i++)
     {
          int k =arr[i];
              
          while(k){
              if(k>n)
              {
                  k=k/2;
                  continue;
              }
              if(v[k]==1){
                  k=k/2;
              }
              if(k<=n&&v[k]!=1){
                  v[k] = 1;
                  break;
              }
              k=k/2;
          }
              
      }
  
  int cnt =0;
  for(int i=1;i<=n;i++)
  if(v[i]>0)
  cnt++;
  if(cnt==n)
  cout <<"YES"<<endl;
  else
  cout <<"NO" <<endl;
}
return 0;
}