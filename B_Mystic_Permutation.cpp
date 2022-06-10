#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n ;
        int arr[n];
        int a[n];
        for(int i=0;i<n;i++)
        { cin >> arr[i];
            a[i]=arr[i];
        } 
        int j = arr[n-1];
        if(n==1){
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            int k = min_element(arr+i,arr+n) - (arr);
            if(arr[k]==a[i])
            k= min_element(arr+i+1,arr+n) - (arr);
            // cout<<k<<endl;
            if(k==n)
            k=k-1;
            swap(arr[i],arr[k]);
        }
        if(a[n-1]==arr[n-1])
        swap(arr[n-2],arr[n-1]);
        // cout<<a[n-1]<<" "<<arr[n-1]<<endl;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
    }
}