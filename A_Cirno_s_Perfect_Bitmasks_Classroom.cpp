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

int32_t main(){
fast
int t=1;
cin>>t;
while(t--){
    int n;
    cin >> n;
    if(n==1){
        cout<<3<<endl;
    }else if(n%2!=0){
        cout<<1<<endl;
    }else{
        float k =log2(n);
        int a = k;
        if(k-a==0){
            cout<<n+1<<endl;
        }else{
            int j = log2(n & -n) ;
            // cout<<j-1<<endl;
            // j=30;
            int k =pow(2,j);
             cout<<k<<endl;;
            //  int k =3^1;
            //  cout<<k<<endl;
        }

    }
}
return 0;
}
