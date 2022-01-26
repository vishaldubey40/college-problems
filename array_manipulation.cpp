#include<bits/stdc++.h>

using namespace std;
const int N=1e7+10;
  long long  int a[N];

int main(){
    long long  int n, q;
    cin >> n >> q;
        while(q--){
        long long int ar, b, c;
        cin >> ar >> b >> c;
            a[ar] = a[ar] + c;
            a[b+1] = a[b+1] - c;
        
    }
    
    for(long long int i =1 ; i<=n; i++)
    a[i]=a[i-1] + a[i];
    long long int max=-1;
    for(long long int i =1 ; i<=n; i++)
    if(max<a[i])
    max=a[i];
    cout<<max<<endl;
}
