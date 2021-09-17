#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int find;
    cin>>find;
    int start,end,mid;
    start=0;
    end=n-1;
   
    while(start<=end){
    mid=(start+end)/2;
    if(find>arr[mid]){
        start=mid+1;
    }else
    if(find<arr[mid]){
        end=mid-1;
    }
    else
   { cout<<mid;
   break;
   }
    }
}
