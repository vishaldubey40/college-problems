#include <iostream>

using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int a,b,c,x,y,z;
       cin>>a>>b>>c>>x>>y>>z;
       int count=0,ct=0;
       if(a>x){
           count++;
       }
         if(b>y){
           count++;
       }
         if(c>z){
           count++;
       }
         if(a<x){
           ct++;
       }
         if(b<y){
         ct++;
       }
         if(c<z){
           ct++;
       }
       if(count>ct){
           cout<<"A"<<endl;
       }else
       cout<<"B"<<endl;
       
   }
}
