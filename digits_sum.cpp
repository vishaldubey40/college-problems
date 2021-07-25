#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    if(n>=1&&n<=8){
        cout<<"0"<<endl;
    }else
    if(n==9){
        cout<<1<<endl;
    }else
    if(n%10==9){
    cout<<n/10  +1<<endl;
}else
cout<<n/10<<endl;
    
}
}
