#include <iostream>

using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int a,b;
       cin>>a>>b;
       int k=a+b;
       if(k%2==0){
           int j=k/2;
           if(j>a&&j<b){
               cout<<a<<" "<<j-a<<endl;
           }else if(j<a&&j>b){
               cout<<j-b<<" "<<b<<endl;
           }else
           cout<<k/2<<" "<<0<<endl;
       }else
       cout<<"-1 "<<-1<<endl;
     }
    
}
