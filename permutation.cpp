#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if((a<=n/2&&b<=n/2)||(a>n/2&&b>n/2)){
            cout<<"-1"<<endl;
        }else if(a>b&&(a-b)!=1){
             cout<<"-1"<<endl;}
             else{
            if(a<b)
            {
                int j=1,k=n/2;
                int ar[k+1],arr[k+1];
            for(int i=1;i<=k;i++)
            {ar[j]=i;
            j++;}
            
             j=1;
            for(int i=k+1;i<=n;i++)
            {arr[j]=i;
            j++;}
            
            // for(int i=1;i<=n/2;i++){
            //     cout<<ar[i]<<" "<<arr[i];
            // }cout<<endl;
            cout<<a<<" ";
            for(int i=1;i<=k;i++){
                if(arr[i]!=b){
                    cout<<arr[i]<<" ";
                }
            }
          cout<<b<<" ";
             for(int i=1;i<=k;i++){
                if(ar[i]!=a){
                    cout<<ar[i]<<" ";
                }
            }
            cout<<endl;
            }else if(a>b){
                int j=1,k=n/2;
                int ar[k+1],arr[k+1];
            for(int i=1;i<=k;i++)
            {ar[j]=i;
            j++;
            }
             j=1;
            for(int i=k+1;i<=n;i++)
            {arr[j]=i;
            j++;}
            // for(int i=1;i<=n/2;i++){
            //     cout<<ar[i]<<" "<<arr[i];
            // }cout<<endl;
            cout<<a<<" ";
            for(int i=1;i<=k;i++){
                if(arr[i]!=a){
                    cout<<arr[i]<<" ";
                }
            }
          cout<<b<<" ";
             for(int i=1;i<=k;i++){
                if(ar[i]!=b){
                    cout<<ar[i]<<" ";
                }
            }
            cout<<endl;
            }
        
            
        }
        
        
        }
}
