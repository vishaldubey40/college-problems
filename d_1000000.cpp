#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
int k=0;
while(t--){
    int n;
    cin >> n;
    k++;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        }
        sort(v.begin(),v.end());
        int cnt = 0,j=1;
        for(int i=0;i<n;i++){
            if(j<=v[i]){
                cnt++;
                j++;
            }
            }
            cout <<"Case #"<<k<<": "<< cnt <<endl;

}
}