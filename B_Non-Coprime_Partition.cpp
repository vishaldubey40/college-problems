#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1||n==2)
    cout<<"No"<<endl;
    else {
        vector<int> v,v1;
        for(int i=1;i<=n;i++){
            if(i%2==0)
            v.push_back(i);
            else
            v1.push_back(i);
        }
        cout<<"Yes"<<endl;
        cout<<v.size()<<" ";
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
        cout<<v1.size()<<" ";
        for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";

    }
}