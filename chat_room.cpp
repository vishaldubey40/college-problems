#include <bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    //cin >> t;
    while(t--){
      string s;
      cin >> s;
      int itr = 0, it = 0;
      string st = "hello";
      for(int i = 0;i < s.length(); i++){
          if(s[i]==st[it]){
              it++;
          }
      }
     if(it == 5){
         cout << "YES" <<endl;
     }else
     cout << "NO" <<endl;
        
    }
    
}
