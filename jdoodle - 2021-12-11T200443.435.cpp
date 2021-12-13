#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int  a,b,c,d;
        cin>>a>>b>>c>>d;
        int i=c*10;
       int j=d*10;
       int che=a+i;
       int e=j+b;
       if(che>e){
           cout<<"Chefina"<<endl;
       }else if(che<e){
           cout<<"Chef"<<endl;
       }else
       cout<<"Draw"<<endl;
        
    }
}