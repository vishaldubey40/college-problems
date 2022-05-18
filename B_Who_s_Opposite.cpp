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
// i love you alpha

int t=1;
cin>>t;
while(t--){
   int a, b, c;
   cin >> a >> b >> c;
   int k = max(a,b);
//    cout<<k<<endl;
int max1 = max(a,max(b,c));
  int j = abs(a-b);
  int i = abs(c-k);
   if(max1<=2*j){
//    cout<<2*j<<endl;
   if(j+c<=2*j)
   cout<<j+c<<endl;
   else cout<<abs(j-c)<<endl;
   }
   else
cout<<"-1"<<endl;

}
return 0;
}
