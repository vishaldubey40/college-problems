#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int t;
    cin>>t;
    vector<long long int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
   long long  int k=max_element(v.begin(),v.end())-v.begin();
    sort(v.begin(), v.end());
   long long int i=v[0];
    long long int j=v[t-2];
    
    cout<<min((j-i),(v[t-1]-v[1]))<<endl;
}
