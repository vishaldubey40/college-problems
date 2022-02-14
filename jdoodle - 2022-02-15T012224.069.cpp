#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, sum=0, count = 0, g = 0;
    cin >> t;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    for(int i=t-1;i>=0;i--){
        if(sum/2<count)
        break;
        count+=v[i];
        g++;
    }
    cout << g <<endl;
}