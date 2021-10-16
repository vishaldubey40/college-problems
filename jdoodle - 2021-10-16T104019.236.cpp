#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int count=0;
    int k=s.length();
    for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            int p=s[i];
            if(s[i]==s[j]){
                s.erase(j,1);
            k--;
            }
            
        }
    }
     for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            int p=s[i];
            if(s[i]==s[j]){
                s.erase(j,1);
            k--;
            }
            
        }
    }
  

    if(k%2==0){
        cout<<"CHAT WITH HER!";
     }else
     cout<<"IGNORE HIM!";
    
}