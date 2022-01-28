#include<bits/stdc++.h>

using namespace std;

int main(){
   long long  int t;
    cin>>t;
    while(t--){
      long long  int n;
        cin>>n;
        if(n%2==0){
         cout<<n-3<<" "<<2<<" 1"<<endl;   
        }else{
            int j=(n-1)/2;
            if(j%2==0)
            cout<<j-1<<" "<<j+1<<" 1"<<endl;
            else
            cout<<j-2<<" "<<j+2<<" 1"<<endl;
        }
    }
    
}
