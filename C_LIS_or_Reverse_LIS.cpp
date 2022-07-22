#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            m[x]++;
        }
        int second_count = 0,count =0;
        for(auto it:m){
            if(it.second>=2)
             second_count++;
             else count++;
        }
        int ans = (count+1)/2;
        ans+=second_count;
        cout<<ans<<endl;
        
    }
}