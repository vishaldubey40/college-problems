#include <bits/stdc++.h>

using namespace std;

int main() {
   long long int t;
    cin>>t;
    while(t--){
     long long   int a,b;
        cin>>a>>b;
     long long   int arr[b*a];
        for(int i=0;i<b*a;i++){
            cin>>arr[i];
        }
      long long  int k=a/2,sum=0,j=0;
        for(int i=a*b-k-1;i>=0;i=i-k-1){
            if(j!=b){
            sum+=arr[i];
            // cout<<arr[i]<<" ";
            j++;
                
            }
        }
            // }cout<<endl;
        cout<<sum<<endl;
        
    }
}
