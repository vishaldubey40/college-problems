#include <bits/stdc++.h>

using namespace std;
//selection sort 
//time complexity O(n^2);
int main() {
    int size;
    cin >> size;
    int arr[size];
    for(int i=0 ;i<size ; i++){
        cin >> arr[i];
    }
    for(int i=0;i<size;i++){
        int index=i;
        for(int j=i+1; j<size;j++){
            if(arr[j] < arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0 ;i<size ;i++){
        cout<< arr[i] <<endl;
    }
}
