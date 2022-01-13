#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        if(n%2==0){k=n;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j||i+j==k-1){
                    cout<<"1 ";
                }else
                cout<<"0 ";
            }cout<<endl;
        }
    }
            
        else{k=n/2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j||i+j==2*k||(i==k&&j==k-1)||(i==k-1&&j==k)){
                    cout<<"1 ";
                }else
                cout<<"0 ";
            }cout<<endl;
        }
        
        
    }
}
}
