//created by:vishal dubey
#include <bits/stdc++.h>
typedef long long int ll;

#define all(x) x.begin(),x.end()

using namespace std;

int main() {
   ll t;
    cin>>t;
    while(t--){
       ll n;
        cin>>n;
       vector<ll> v(n);
        for(int i=0;i<n;i++){
         cin>>v[i];
    }
    int p=*max_element(all(v));
    ll a=v[n-1];
    ll ma=0;
    if(v[n - 1] == p){
      cout << 0 << endl;
      continue;
    }
           ll i=0;
            for(int i=n-1;i>=0;--i){
                if(v[i-1]>a &&  p!=a){
                    a=v[i-1];
                    ma++;
                }else {if( v[i-1] > a && p==a){
                    a=v[i-1];
                    ma++;
                    break;
                }
            }
            }
            cout << ma -1<< endl;
}
return 0;
}
