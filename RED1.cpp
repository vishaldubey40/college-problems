//starter 36 red 1
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int k=sqrt(n);
        long long int i =k/2;
            long long int p=0;
        long long    int y=n;
            while(y%2==0){
                y=y/2;
                p++;
            }
        if(n==1){
            cout<<0<<endl;
        }else if(n%2!=0){
            cout<<1<<endl;
        }else if(k*k==n){
            cout<<1<<endl;
        }else if(p==0)
            cout<<1<<endl;
        else if(p%2!=0)
        {    cout<<-1<<endl;
            }
            else
            cout<<2<<endl;
       
        
    }
}
