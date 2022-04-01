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
        int n, m;
        cin >> n >> m;
        vector<int> v(n+1);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        vector<int> sum(n+1);
        sum[0]=0;
        vector<int> b(m);
        for(int i=0;i<m;i++){
            cin >> b[i];
        } 
        for(int i=1;i<=n;i++){
            sum[i] = sum[i-1] + v[i-1];
        }
        int j = 1,i = 0,cnt = 0;
        // cout << sum[1] <<" "<<sum[2]<<" "<<sum[3]<<endl;
        while(i!=m){
                 auto it = lower_bound(sum.begin(),sum.end(),b[i]);
                cout << it-sum.begin() <<" "<< abs(sum[it-sum.begin()-1]-b[i])<<endl;
                j=0;
                i++;
            }
      

        return 0;
    }
