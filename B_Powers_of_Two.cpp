#include<bits/stdc++.h>

using namespace std;

int main(){
   long long int n;
    cin >> n;
    vector<long long int> v(n);
    for(long long int i=0;i<n;i++)
    cin >> v[i];
    sort(v.begin(),v.end());
    vector<long long int> v1(30);
    int a = 2;
    for(long long int i=0;i<30;i++){
        v1[i]=a;
        a*=2;
    }
    long long int cnt = 0;
    for(long long int i=0;i<n;i++){
        auto it=lower_bound(v1.begin(),v1.end(),v[i]);
        long long int k;
        if(it==v1.end())
        continue;
        k=it-v1.begin();
        // cout<<k<<endl;
        // int j;
        for(long long int  ia =k;ia<30;ia++){
            
        int j = v1[ia]-v[i];
        // cout<<v1[ia]<<" "<<j<<endl;
        // cout<<count(v.begin()+i+1,v.end(),j)<<endl;;
        long long int g,h;
        g=lower_bound(v.begin()+1+i,v.end(),j) - v.begin();
        h=upper_bound(v.begin()+1+i,v.end(),j) - v.begin();
        cnt+=h-g;
        // cout<<cnt<<"a"<<endl;
        }
    }
    cout<< cnt;
}