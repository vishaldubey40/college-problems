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
int n, x;
cin >> n >> x;
map<int,int> m;
// vector<int> v(n);
rep(i,n){
int a;
cin >>a;
m[a]++;
}
int ct =0;
int count = 0;
for(auto it:m){
   int k;
    if(it.second!=0)
    k = (it.first) * x;
   else continue;
    auto j = m.find(k);
    if(j!=m.end()&&j->second!=0&&m[it.first]!=0)
    {   if(j->second == m[it.first]){
        j->second=0;
        m[it.first]=0;
    }else if(it.second>j->second){
         m[it.first]-=j->second;
         j->second=0;      
    }else
       { j->second=j->second-m[it.first];
        m[it.first]=0;
       }
    }
    }
    for(auto it: m){
        // cout <<it.first << " "<<it.second<<endl;
        if(it.second>0)
        ct+=it.second;
    }
cout << ct <<endl;
// rep(i,v.size()){
//     if(v[i]*x > 1e9){
//         count++;
//         }else{
//             int k = v[i] * x;
//             int j = (lower_bound(v.begin(), v.end(), k) - (v.begin()));
//             if(v[j]==k&&j!=v.size()){
//                 v.erase(v.begin()+j);
//             }else{
//                 count++;
//             }
//         }
// }
// cout << count <<endl;
}
return 0;
}
