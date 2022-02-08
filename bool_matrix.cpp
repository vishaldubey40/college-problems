#include <iostream>

using namespace std;



int main() {
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
          
            
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        if(arr[i][j]==1){
               for(int ja=0;ja<n;ja++)
               arr[i][ja] = 1;
               
               for(int ja=0;ja<n;ja++)
               arr[ja][j]=1;
           }
           }
            
        }
           for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j]<<" ";
             }cout <<endl;
    }
    }
    
