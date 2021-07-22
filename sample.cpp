#include<bits/stdc++.h>
//#define ll long long 

using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> v[n];
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
 for(int i=0;i<n;i++){
    print(v[i]);
 }
    // vector<pair<int,int>> v;
      //for(int i=0;i<4;i++){
        // int x,y;
         //cin>>x>>y;
         //v.push_back({x,y});
    // }
     //for(int i=0;i<v.size();i++){
      ///   cout<<v[i].first<<" "<<v[i].second<<endl;
     //}
}
