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
int w, h;
cin >> w >> h;
int k;
cin >> k;
vector<int> h1(k);
rep(i,k)
cin >> h1[i];
int j;
cin >>j;
vector<int> h2(j);
rep(i,j)
cin >> h2[i];
int n;
cin >> n;
vector<int> v1(n);
rep(i,n)
cin >> v1[i];
int m;
cin >> m;
vector<int> v2(m);
rep(i,m)
cin >> v2[i];
    int area1 = h*(h1[k - 1] - h1[0]); 
    int area2 = h*(h2[j - 1] - h2[0]); 
    int area3 = w*(v1[n - 1] - v1[0]); 
    int area4 = w*(v2[m - 1] - v2[0]); 
   cout << max(max(area1,area2),max(area3,area4))<<endl;
}
return 0;
}
