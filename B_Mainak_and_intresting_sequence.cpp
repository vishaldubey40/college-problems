#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int j = m/n;
        if(n>m)
        cout<<"NO"<<endl;
        else{
            vector<int> v;
            if(m%n==0){
                int k = n;
                while(k--){
                    v.push_back(m/n);
                }
                cout<<"YES"<<endl;
                for(int i=0;i<n;i++)
                cout<<v[i]<<" ";
                cout<<endl;
            }else if(n%2!=0){
                int a = m/n;
                int k = n;
                k--;
                while(k--)
                v.push_back(a);
                v.push_back(m-a*(n-1));
                cout<<"YES"<<endl;
                for(int i=0;i<n;i++)
                cout<<v[i]<<" ";
                cout<<endl;
            }else if(m%2==0){
                int k = n-2;
                int temp= m/n;
                int s = k*temp;
                while(k--)
                v.push_back(temp);
                v.push_back((m-s)/2);
                v.push_back((m-s)/2);
                cout<<"YES"<<endl;
                for(int i=0;i<n;i++)
                cout<<v[i]<<" ";
                cout<<endl;
            }else
            cout<<"NO"<<endl;
        }
    }
}
