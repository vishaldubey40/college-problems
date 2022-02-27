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


int t=1,r,avg;
cin>>t>>r>>avg;
int sum = 0;
multimap<int,int> m;
rep(i,t)
{
    int a, b;
    cin >> a >> b;
    sum+=a;
    m.insert({ b, a });
}
int AVG = t*avg - sum;
// cout << AVG <<endl;
int x = 0, j = 0 , l;
for(auto it:m){
    if(x>=AVG)
    break;
    if(it.second<r){
        int dif = r - it.second;
        x+=dif;
        l=it.first;
        j+=(dif*it.first);
//  cout << j << " " << x <<" "<< l<<endl;
    }
}
if(AVG<=0)
cout << 0 << endl;
else
cout << j - ((x-AVG)*l)<<endl;
return 0;
}
