#include<bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626

const int mod= 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    int a[n];
    int min=INT_MAX ,max=INT_MIN ,min_ind=-1,max_ind=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=min){
            min=a[i];
            min_ind= i;
        }
        if(a[i]>max){
            max=a[i];
            max_ind= i;
            // cout << i <<endl;
        }
    }
    if(min_ind<max_ind){
        max_ind--;
    }
    cout<<max_ind+(n-1)-min_ind;
    // cout<<max_ind<<" "<<min_ind;
    
    return 0;
}
