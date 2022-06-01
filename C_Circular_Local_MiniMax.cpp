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
int n;
cin >> n;
int arr[n];
map<int,int> m;
for(int i=0;i<n;i++)
{cin >> arr[i];
}
// int cnt =0;

sort(arr,arr+n);
int j = n/2;
int k = n-j;
// cout<<j<<" "<<k<<endl;
vector<int> v(n);
int i =0 ,p=0;
while(k--){
    v[i] = arr[p];
    p++;
    i+=2;
}
i=1;
//  cout<<j<<end;
while(j--){
v[i] = arr[p];
// cout<<i<<endl;
i+=2;
p++;
}
int cnt=0, cnt1=0;
rep(i,n-1){
    if(v[i]<v[i+1])
    cnt++;
    else if(v[i]!=v[i+1])
    cnt1++;
}
if(cnt+cnt1!=n-1||v[0]==v[n-1]){
    cout<<"NO"<<endl;
}else {if(n%2!=0){
    if(v[n-1]>v[0])
    cout<<"NO"<<endl;}
else
{
    cout<<"YES"<<endl;
for(int i=0;i<n;i++)
cout<<v[i] << " ";

cout<<endl;
}
}
}
return 0;
}
