#include<bits/stdc++.h>

using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        long long int a, b;
        cin >> a >> b;
        vector<long long int> v(a);
        // vector<long long int> v1(a);
        for(int i=0;i<a;i++){
            cin >> v[i];
           }
           sort(v.begin(),v.end());
        int cnt =0;
        for(int i=0;i<a;i++){
           if(binary_search(v.begin(),v.end(),v[i]+b))
           {
               cnt++;
               break;
           }
        }
        if(cnt==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}