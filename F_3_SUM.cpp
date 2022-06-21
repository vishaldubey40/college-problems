#include<bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      map<int,int> m;
      for(int i=0;i<n;i++){
         int a;
         cin >> a;
         if(m[a%10]<=4)
         m[a%10]++;
      }
      vector<int> v;
      for(auto it:m){
         int k = it.second;
         while(k--){
            v.push_back(it.first);
         }
      }
      int ct=0;
      for(int i=0;i<v.size()-2;i++){
         for(int j=i+1;j<v.size()-1;j++){
            for(int k=j+1;k<v.size();k++){
               int  p = (v[i]+v[j]+v[k]);
               // cout<<p<<endl;
               if(p%10==3)
               {
                  cout<<"YES"<<endl;
                  ct++;
                  break;
               }
            }
            if(ct) break;
         } if(ct) break;
      }
      if(ct==0) cout<<"NO"<<endl;
      // for(int i=0;i<v.size();i++)
      // cout<<v[i]<<" ";
   }
}