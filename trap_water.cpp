#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int l[t],r[t];
    l[0]=a[0];
    for(int i=1;i<t;i++){
        if(l[i-1]<a[i]){
            l[i]=a[i];
        }else
        l[i]=l[i-1];
    }
    r[t-1]=a[t-1];
     for(int i=t-2;i>=0;i--){
        if(r[i+1]<a[i]){
            r[i]=a[i];
        }else
        r[i]=r[i+1];
    }
    int ans=0;
    for(int i=0;i<t;i++){
     //  cout<<r[i]<<" ";
        if(l[i]<r[i]){
            ans+=l[i]-a[i];
        }else
         ans+=r[i]-a[i];
    }
    cout<<ans;
}
