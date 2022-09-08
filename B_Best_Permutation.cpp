#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        // int arr[]
        if(n%2==0){
            // cout 
        for(int i=n-2;i>=1;i--){
            cout<<i<<" ";

        }
        cout<<n-1<<" "<<n<<endl;
        }else{
            cout<<n-3<<" "<<n-2<<" ";
            for(int i=n-4;i>=1;i--)
            cout<<i<<" ";
            cout<<n-1<<" "<<n<<endl;
        }
    }
}