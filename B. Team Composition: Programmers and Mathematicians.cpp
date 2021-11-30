#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
      int k=a+b;
      if(a==b){
          cout<<k/4<<endl;
      }else
      {  int j=k/4;
          if(j>=a&&j>=b){
              cout<<j<<endl;
          }else if(j<=a&&j>b){
              cout<<b<<endl;
          }else if(j<=b&&j>a){
              cout<<a<<endl;
          }else
          cout<<j<<endl;
          
      }
    
}

    
}
