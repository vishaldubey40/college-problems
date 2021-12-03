#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       long long int n,a,b,c;
        cin>>n>>a>>b>>c;
        int ar[n];
       for (int i=0;i<n;i++)
       { cin>>ar[i];
    }
    vector<int> v;
      for (int i=0;i<n;i++)
       { int j=ar[i];
        if(j>=a&&j<=b){
            int y=j;
            
            v.push_back(y);
        }
       }
       sort(v.begin(), v.end());
      // for(int i=0;i<v.size();i++)
       //cout<<v[i]<<" ";
      long long int k=0,p=0;
       for(int i=0;i<v.size();i++){
          k+=v[i];
           if(k<=c){
               
               p++;
           }
           
       }
       cout<<p<<endl;
    }
    
}
