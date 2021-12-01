#include <bits/stdc++.h>

using namespace std;

void printvec(vector<int> v){
     int k=v.size();
        cout<<"size of vector is :"<<k<<endl;
    for(int i=0;i<v.size();i++){
       
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        v.push_back(c);
         printvec(v);
    }
   
}
