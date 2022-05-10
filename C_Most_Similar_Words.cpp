#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<string> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int min1 = INT_MAX;
        int sum=0;
        for(int i=0;i<n-1;i++){
            for(int k=i+1;k<n;k++){
                for(int j=0;j<m;j++){
                    sum+=abs(v[i][j]-v[k][j]);
                }
                min1=min(min1,sum);
                sum=0;
            }
        }
        cout<<min1<<endl;
    }
}