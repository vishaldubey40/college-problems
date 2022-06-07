#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n, a, b;
        cin >> n >> a >> b;
        long long int s=1,p=1;
        bool temp = 0;
        for(int i=0;i<31;i++){
            if(s<=n&&(n-s)%b==0){
                temp=1;
                break;
            }
            if(s*a<=n)
            s=s*a;
            else break;
        }
        if(temp){
            cout<<"Yes"<<endl;
        }else
        cout<<"No"<<endl;
        }
    }
    
