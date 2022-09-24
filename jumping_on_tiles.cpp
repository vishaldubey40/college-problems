#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        char f=s[0],l = s[n-1];
        // sort(s.begin(),s.end());
        multimap<char,int> m;
        for(int i=0;i<n;i++){
            m.insert(make_pair(s[i],i+1));
        }
        // for(auto it:m)
        // cout<<it.first<<endl;
        int cnt = 0;
        for(auto it:m){
            if(it.second==1)
            cnt = 1;
        else
        if(it.second==n){
            break;
        }
    }
    // cout<<cnt<<endl;
    vector<int> ans;
    int cost=0;
    
    if(cnt){
        int temp=0;
        for(auto it:m){
            // cout<<it.first<<" "<<it.second<<endl;
            if(it.second==1)
            temp=1;
            if(it.second==n)
            temp=0;
            if(temp)
            ans.push_back(it.second);
        }
        ans.push_back(n);
    }
    else{
        int temp=0,in;
        for(auto it:m){
            if(it.first==f)
            in = it.second;
        }
         for(auto it:m){
            // cout<<it.first<<" "<<it.second<<endl;
            if(it.first==l)
            temp=1;
            // cout<<temp<<endl;
            if(temp)
            ans.push_back(it.second);
            if(it.second==in)
            temp=0;
        }
        // ans.push_back(1);
        reverse(ans.begin(),ans.end());
    }
    for(int i=0;i<ans.size()-1;i++){
        // cout<<s[ans[i]-1] <<" "<<s[ans[i+1]-1]<<endl;
        // cout<<ans[i]<<" "<<ans[i+1]-1<<endl;
        cost+=abs(((s[ans[i]-1]-97)-(s[ans[i+1]-1]-97)));
    }
    cout<<cost<<" "<<ans.size()<<endl;
    cout<<1<<" ";
    for(int i=0;i<ans.size();i++)
    if(ans[i]==1||ans[i]==n)
    continue;
    else
    cout<<ans[i]<<" ";
    cout<<n<<endl;
}
}
