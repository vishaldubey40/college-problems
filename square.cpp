#include <bits/stdc++.h>

using namespace std;

int main() {
  long long  int t;
    cin>>t;
    while(t--){
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       if( a==d && (c+b) == a){
           cout << "Yes" << endl;
       }else if(b==c && (a+d)==b){
           cout << "Yes" << endl;
       }else if(a==c && (d+b)==a){
           cout << "Yes" << endl;
       }else if( b==d && (a+c)==b){
           cout << "Yes" << endl;
       }else cout << "No" << endl;
}
}
