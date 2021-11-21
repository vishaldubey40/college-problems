#include <bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    
  int  max=a[0];
    for(int i=0;i<3;i++){
        if(max<=a[i]){
            max=a[i];
        
            }
    }
    int count=0;
    if(a[0]==a[1]&&a[1]==a[2]){
        count++;
    }
    int p=0;
    if(a[0]!=a[1]&&a[1]==a[2]){
        p++;
    }
    for(int i=0;i<3;i++){
        int j=abs(max-a[i]);
        if(j!=0||(count==1)){
        cout<<j+1<<" ";
        }else if(p==1){
        cout<<j+1<<" ";
        }else
        cout<<j;
    }cout<<endl;
    
}
    
}
