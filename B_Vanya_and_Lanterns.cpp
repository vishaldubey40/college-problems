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
while(t--){
 int n, m;
 cin >> n >> m;
 vector<int> v(n);
 int cnt = 0;
 for(int i=0;i<n;i++)
 {cin >> v[i];
  if(v[i]==0)
  cnt++;
  }
  if(n==1){
  cout << max(abs(0-v[0]),m-v[0]);
  continue;}
  sort(v.begin(),v.end());
  vector<int> diff;
  rep(i,n-1){
      diff.push_back(abs(v[i]-v[i+1]));
  }
    //   diff.push_back(abs(v[n-1]-m));
  sort(diff.begin(),diff.end());
  if(cnt == 1){
       cout << fixed <<setprecision(10) <<max((float)diff[diff.size()-1]/2,(float)m-v[n-1]) <<endl;
  }else{
  cout << fixed << setprecision(10) << max(max((float)v[0],(float)m-v[n-1]),(float)diff[diff.size()-1]/2) << endl;;
}
}
return 0;
}
