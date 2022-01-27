#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin >> t;
while ( t-- ){
    int n, m, a, b, count =0 ,p=0;
    cin >> n >>m >> a >> b;
    char ch[n+1][m+1];
    for(int i=1;i<= n; i++){
        for( int j=1 ; j<=m ;j++){
            cin>>ch[i][j];
            // cout << ch[i][j] <<" ";
            if(ch[i][j]=='B'){
                count++;
            }
        }
    }
           for(int i=1;i<=n;i++)
  {          if(ch[i][b]=='B')
   p++;}         
            for(int j=1;j<=m;j++)
 {           if(ch[a][j]=='B'){
                p++;
            }
}
    if(count==0){
        cout<<"-1"<<endl;
        
    }else if(ch[a][b]=='B'){
        cout<<0<<endl;
    }else
    if(p>=1){
        cout<<1<<endl;
    }else cout<<2<<endl;
    
}
}
