#include <bits/stdc++.h>

using namespace std;

int main() {
  long long  int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
        }else{
           long long int a,b,c=0,d=0;
            while(n!=1){
                if(n%6==0){
                    n=n/6;
                    c++;
                }else {
                    if(n%6==3){
                        n=2*n;
                        c++;
                    }else if(n%6!=3){
                        cout<<-1<<endl;
                        d++;
                        break;
                    }
                }
            }
            if(d==0)
      cout<<c<<endl;  }
    }
}
