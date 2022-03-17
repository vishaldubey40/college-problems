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
 int n;
 cin >> n;
 vector<int> v;
 vector<int> in;
 int arr[n];
 for(int i=0;i<n;i++){
     cin >> arr[i];
     v.push_back(arr[i]);
 }
 int cnt=0;
 sort(v.begin(),v.end());
 for(int i=0;i<n;i++){
     if(arr[i]!=v[i]){
     in.push_back(i);
 }
 }
    if(in.size()==0){
        cout << "yes" <<endl;
         cout << 1 << " " << 1 <<endl;}
         else{
     reverse(arr+in[0],arr+in[in.size()-1]+1);
     if(is_sorted(arr,arr+n)){
         cout <<"yes"<<endl;
  cout << in[0]+1 <<" " <<in[in.size()-1]+1 <<endl;}
     else
  cout <<"no"<<endl;
         }
 
}
return 0;
}
