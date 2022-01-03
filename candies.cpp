#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  long long  int t;
    cin>>t;
    while(t--){
       long long int n,k=2,j;
        cin>>n; 
        j=pow(2,k);
        while(n%(j-1)!=0){
            k++;
            j=pow(2,k);
        }
            cout<<n/(j-1)<<endl;
}
}
