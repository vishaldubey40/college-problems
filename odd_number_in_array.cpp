#include<bits/stdc++.h>

using namespace std;
const long long int N=1e3+7;
long long int pf[N][N];
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1 ; j<=m ;j++){
            int p=0;
            if(arr[i][j]%2!=0)
            p=1;
            pf[i][j]=pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1]+p;
           // cout<<pf[i][j]<<" ";
        }  }
    int q;
    cin >> q;
    while(q--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a==x&&b==y)
       { cout<<(arr[a][a]%2!=0)?1:0;
        cout<<endl;}else
        
        cout<<pf[x][y]-pf[a-1][y]-pf[x][b-1]+pf[a-1][b-1]<<endl;
    }
    
}
