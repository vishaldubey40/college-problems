#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int arr[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin >> arr[i][j];
            }
        }
        int sum =0 ;
        int max1=INT_MIN;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                sum=0;
              int n, m;
              n=i, m=j;
              while(1){
                  if(n<0||m<0)
                  break;
                  sum+=arr[n][m];
                  n=n-1;
                  m=m-1;
              }
            //   cout<<sum<<" "<<j<<endl;
              n=i,m=j;
              while(1){
                  n+=1;
                  m+=1;
                  if(n>=a||m>=b)
                  break;
                  sum+=arr[n][m];
              }
            //   cout<<sum<<" "<<j<<" "<<i<<" "<<m<<endl;
              n=i;m=j;
              while(1){
                n+=1;
                m-=1;
                if(n>=a||m<0)
                break;
                sum+=arr[n][m];
                // if((m!=i&&n!=j)&&(m!=n))
                // sum+=arr[m][n];
              }
              n=i,m=j;
              while(1){
                  n-=1;
                  m+=1;
                  if(m>=b||n<0)
                break;
                sum+=arr[n][m];
              }
            //   cout<<sum<<" "<<j<<endl;
              max1=max(sum,max1);
            }
        }
       cout<<max1<<endl;
    }
}