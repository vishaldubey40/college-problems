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


int t=1;
cin>>t;
while(t--){
char chess[9][9];
int t=0,a=0,b,c=-1;
vector<pair<int,int>> v;
for(int i=1;i<9;i++){
     for(int j=1;j<9;j++){
        cin >> chess[i][j];
           }
       }
       for(int i=2;i<8;i++){
    int cnt=0;
    // t=0;
    int temp=0;
    for(int j=1;j<8;j++){
        if(chess[i][j]=='#')
        {cnt++;
        temp=j;
          }  }
           if(cnt==1){
            int p=i;
            // cout<<i<<" "<<temp<<endl;
            if(chess[p-1][temp+1]=='#'&&chess[p+1][temp-1]=='#'&&chess[p-1][temp-1]=='#'&&chess[p+1][temp+1]=='#'){
            a=i;
            break;}
           }
       }
    
        for(int i=2;i<8;i++){
            if(chess[a][i]=='#'){
            cout<<a<<" "<<i<<endl;
            break;}
        }
    
    
}
return 0;
}
