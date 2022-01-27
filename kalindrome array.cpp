#include <bits/stdc++.h>

using namespace std;
const int N=2e5+10;
int n,t,p,a[N],b[N],m;
bool ans;
void check(int x){
     m=0;
    for( int i=1 ; i<=n ; i++)
        if( a[i] != x)
        b[++m] = a[i];
        for(int i=1;i<=m;i++)
        if( b[i] != b[m - i + 1])
        return;
    
    ans=true;
}

int main() {
cin >> t;
while( t-- ){
    cin >> n; 
    ans = true;
   
    for(int i=1;i<=n;i++){
        
        cin >> a[i];
        
    }
    for(int i=1; i <= n ; i++){
        if(a[i] != a[n+1-i])
        {  ans = false;
            check(a[i]);
            check(a[n+1-i]);
            break;
             
        }
    }
    if(ans){
        cout<<"Yes"<<endl;
    }else
    cout<<"No"<<endl;
}
return 0;
}
