#include <bits/stdc++.h>

using namespace std;

int main() {
   long long int t;
    cin>>t;
    while(t--){
       long long int n;
        cin>>n;
        int s,c,e;
        s=sqrt(n);
        c=cbrt(n);
        e=sqrt(c);
        cout<<s+c-e<<endl;
    }
}
