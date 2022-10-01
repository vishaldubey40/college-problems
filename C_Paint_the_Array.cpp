#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        for(long long int i=0;i<n;i++)
            cin >> a[i];
        vector<long long int> fa;
        vector<long long int> sa;
        for(int i=0;i<n;i+=2){
            fa.push_back(a[i]);
        }
        for(long long int i=1;i<n;i+=2)
            sa.push_back(a[i]);
        long long int ga = fa[0],gsa = sa[0];
        for(long long int i=1;i<fa.size();i++)
            ga = __gcd(ga,fa[i]);
        for(long long int i=1;i<sa.size();i++)
            gsa = __gcd(gsa,sa[i]);
            // cout<<gsa<<endl;
        bool ok = true;
        for(long long int i=0;i<sa.size();i++){
            if(sa[i]%ga==0){
                ok=false;
                break;
            }
        }
        bool ok1=true;
        for(int i=0;i<fa.size();i++){
            if(fa[i]%gsa==0){
                ok1=false;
                break;
            }
        }
        if(ok){
            cout<<ga<<endl;
        }else if(ok1) cout<<gsa<<endl;
        else cout << 0 <<endl;
    }
}