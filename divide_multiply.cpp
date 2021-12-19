#include <bits/stdc++.h>

using namespace std;

int main(){
long long int t;
cin>>t;
while(t--){
  long long  int n;
    cin>>n;
  long  long  int a[n];
   long int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            while(a[i]%2==0){
                a[i]=a[i]/2;
                count++;
            }
        }
    }
long long    int k,max=0,sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            k=i;
        }
    }
long long    int j=pow(2,count)*max;
    for(int i=0;i<n;i++){
        if(k!=i){
            sum+=a[i];
        }
    }
    cout<<sum+j<<endl;
}
}
