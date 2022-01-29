#include <bits/stdc++.h>

using namespace std;
const int N=1e5+10;
int arr[N];
void merge(int l, int r, int mid){
    int l_sz = mid - l + 1;
    int r_sz = r - (mid + 1) + 1;
    int l_a[l_sz + 1];
    int r_a[r_sz + 1];
    for(int i = 0; i < l_sz ; i++){
        l_a[i]=arr[i+l];
    }
    for(int i = 0; i < r_sz ; i++){
        r_a[i]=arr[i+mid+1];
    }
    l_a[l_sz]=r_a[r_sz]=INT_MAX;
    int l_i=0,r_i=0;
    for( int i=l; i <= r ;i++){
        if(l_a[l_i]<=r_a[r_i]){
            arr[i]=l_a[l_i];
            l_i++;
        }else
        {
               arr[i]=r_a[r_i];
            r_i++;
            
        }
    }
}
void mergesort(int l, int r){
    if(l==r) return;
    int mid=( l + r ) / 2;
    mergesort(l, mid);
    mergesort(mid+1, r);
    merge(l, r, mid);
}
int main() {
    int size;
    cin >> size;
    for(int i=0 ; i< size; i++){
        cin >> arr[i];
    }
    int l=0;
    int r=size-1;
    mergesort(l,r);
    for(int i=0 ;i<size;i++){
        cout << arr[i] <<" ";
    }
}
