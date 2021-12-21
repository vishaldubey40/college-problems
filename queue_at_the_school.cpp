#include <bits/stdc++.h>

using namespace std;

int main() {
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  while(t--){
      for(int i=0;i<n-1;i++){
          if(s[i]=='B'&&s[i+1]=='G'){
              char ch=s[i];
              s[i]=s[i+1];
              s[i+1]=ch;
              i++;
          }
      }
  }
    
  cout<<s;  
}
