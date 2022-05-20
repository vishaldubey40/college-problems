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
  int num;
  cin >> num;
  int temp, fi, ct, i, j, sq;
   sq = sqrt(num);
  if(sq*sq==num){
      cout << sq << " " << 1 <<endl;
  }else{
      sq+=1;
    //   cout<<sq<<endl;
      fi =  2*sq - 1;
    //   cout<<fi<<endl;
      i = sq*sq - (fi - 1);
      if(sq>(num-i)){
    //   cout<<num -i<<endl;
          cout<<num-i+1<<" "<<sq<<endl;
      }else{
        //   cout<<i<<endl;
          i=i+sq-1;
          j = num - i;
           ct = sq - j;
           cout<<sq<<" "<<ct<<endl;
      } 
  }
} 
return 0;
}
