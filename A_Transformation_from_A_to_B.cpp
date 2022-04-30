#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v;
    int a=0, b;
    b=m;
    while(1){
           if(b%2==0){
               v.push_back(b/2);
               b=b/2;
           }else if(b%10==1){
               v.push_back(b/10);
               b=b/10;
           }else{
               break;
           }
            if(b<n){
               a++;
               break;
           }
               
    }
    if(1){
        v.push_back(m);
        sort(v.begin(),v.end());
        auto it=find(v.begin(),v.end(),n);
          if(it!=v.end()){
              int k=it-v.begin();
              cout<<"YES"<<endl<<v.size()-k<<endl;
              for(auto it:v){
                  if(it>=n)
                  cout<<it<<" ";
              }
          }else
          cout<<"NO"<<endl;
        
    }
}