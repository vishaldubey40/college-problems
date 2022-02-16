#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    t = 1;
    while(t--){
       int n, count = 0;
       cin >> n;
       int arr[n];
       for(int i = 0;i < n;i++){
           cin >> arr[i];
           if(arr[i]%2==0){
               count++;
           }
       }
       if(count >= 2){
           for(int i = 0;i <n;i++){
               if(arr[i]%2!=0){
                   cout << i+1;
                   break;
               }
           }
       }else
       {
    //   cout << count ;
           for(int i=0;i<n;i++){
               if(arr[i]%2==0){
               cout << i+1;
               break;}
           }
       }
        
    }
}
