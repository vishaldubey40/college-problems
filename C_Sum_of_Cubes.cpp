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
const int N=1e4+10;
vector<int> v(N);
v[0]=-29;
for(int i=1;i<=N;i++){
    v[i]=i*i*i;
}
// cout << v[1] <<" "<<v[2];
int t=1;
cin>>t;
while(t--){
int n;
cin >> n;
int count = 0;
for(int i=1;i<=N;i++){
    int k=i*i*i;
    if(n-k<0){
        break;
    }
    if(binary_search(v.begin(),v.end(),(n-k))){
        cout <<"YES"<<endl;
        count++;
        break;
    }    
}

if(count == 0){
    cout <<"NO"<<endl;
}
}
return 0;
}
