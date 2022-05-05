#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin >> t;
    vector<int> a(t);
    for(int i=0;i<t;i++){
      cin >> a[i];
    }
    int cnt = 0;
    
    int ans=0;
    for(int i=0;i<t-1;i++){
        if(a[i]<a[i+1])
        cnt++;
        else{
    //    cout<<cnt<<endl;
        cnt=0;
    }
           ans =  max(ans,cnt);
    }
    cout<<ans+1<<endl;
}