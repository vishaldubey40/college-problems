g#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> s;
      long long int l=s.length();
        vector<long long int> v;
        vector<long long int> v1;
        for(int i=0;i<l;i++)
      {
          v1.push_back(s[i]-'0');
      }
        //cout<<v1[0];
        for(long long int i=0;i<l-1;i++){
            
        v.push_back(s[i]-'0'+s[i+1]-'0');
    }
    int p=max_element(v.begin(),v.end())-v.begin();
     if(*max_element(v.begin(),v.end())==10){
         v.erase(v.begin()+p);
        p=max_element(v.begin(),v.end())-v.begin();
     }
//  sort(v.begin(),v.end());
    // if(v[l-1]==10){
        // p=l-2;
    // }else
    // p=l-1;
   v1[p]=*max_element(v.begin(),v.end());
  
      v1.erase(v1.begin()+p+1);
  
   for(int i=0;i<v1.size();i++)
   cout<<v1[i];
cout<<endl;
    }
}
