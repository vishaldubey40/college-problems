#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin>>n >> m;
        if(m%2==0){
            if(n%2!=0)
            cout<<"Burenka"<<endl;
            else
            cout<<"Tonya"<<endl;
        }else{
            if(n%2==0){
                cout<<"Burenka"<<endl;
            }else
            cout<<"Tonya"<<endl;
        }

    }
}