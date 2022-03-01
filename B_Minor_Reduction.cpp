// vishal dubey 
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
while(t--){
string s;
cin >> s;
int k = s.length();
int ct = 0;
    for(int i=k-1;i>0;i--){
        stringstream sso;
    sso << s[i];
    int w;
    sso >> w;
    stringstream sps;
    sps << s[i-1];
    int q;
    sps >> q;
    if(w+q>=10){
    stringstream h;
    h << w+q;
    string temp1;
    h >> temp1;
     s.replace(i-1,2,temp1);
    cout << s <<endl; 
    ct++;
     break;
        }
      }
      if(ct==0){
        string s1=s;
         stringstream ssoo;
    ssoo << s[0];
    int wa;
    ssoo >> wa;
    stringstream spso;
    spso << s[1];
    int qa;
    spso >> qa;
    stringstream h;
    h << wa+qa;
    string temp2;
    h >> temp2;
    s1.replace(0,2,temp2);
    cout << s1 <<endl; 
      }  
  
}
return 0;
}
