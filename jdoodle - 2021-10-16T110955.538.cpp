#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
int c=0,d,a,b,max=0;
while(t--){
    
    cin>>a>>b;
    c+=(b-a);
    
    if(max<c){
        max=c;
    }
}
cout<<max;
}