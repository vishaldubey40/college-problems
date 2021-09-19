#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
             if(n%2!=0){        
            int j1=n/2;
            int a[j1],ar[j1+1];
            int j=0,k=0;
            for(int i=0;i<n;i++){
                if((i+1)%2==0){
                    a[j]=i+1;
                    j++;
                }else
                {
                    ar[k]=i+1;
                    k++;
                }
            }
            sort(a,a+j1,greater<int>());
            sort(ar,ar+j1+1,greater<int>());
            j=0;k=0;
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    cout<<a[j]<<" ";
                    j++;
                }else{
                    cout<<ar[k]<<" ";
                    k++;
                }
            }cout<<endl;
             }else{ int j1=n/2;
            int a[j1],ar[j1];
            int j=0,k=0;
            for(int i=0;i<n;i++){
                if((i+1)%2==0){
                    a[j]=i+1;
                    j++;
                }else
                {
                    ar[k]=i+1;
                    k++;
                }
            }
            sort(a,a+j1,greater<int>());
            sort(ar,ar+j1,greater<int>());
            j=0;k=0;
            for(int i=1;i<=n;i++){
                if(i%2==0){
                    cout<<a[j]<<" ";
                    j++;
                }else{
                    cout<<ar[k]<<" ";
                    k++;
                }
            }cout<<endl;
             }
    }
}
