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


int t;
cin>>t;
int sum1 = 0, sum2 = 0,sum3=0;
while(t--){
int a, b;
cin >> a >> b;
if(a>b)
sum1++;
if(b>a)
sum2++;
if(b==a)
sum3++;
}
// cout << sum1 <<" " <<sum2 <<" "<<sum3 <<endl;
if(sum1>sum2)
cout << "Mishka"<<endl;
if(sum1<sum2)
cout<<"Chris"<<endl;
if(sum1==sum2)
cout<<"Friendship is magic!^^"<<endl;
return 0;
}
