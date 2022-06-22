#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> m;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                int k = n/i;
                m[k]++;
                m[i]++;
            }
        }
        if(m.size()>=3){
            // int i=-1,j=-1;
            vector<int> v;
                for(auto it: m){
                    v.push_back(it.first);
                }
                int cnt = 0;
                // cout<<v.size()<<endl;
                for(int i=0;i<v.size()-2;i++){
                    for(int k=i+1;k<v.size()-1;k++){
                        for(int h=k+1;h<v.size();h++){
                            if((v[i]*v[h]*v[k])==n){
                                cout<<"YES"<<endl;
                                cout<<v[i]<<" "<<v[h]<<" "<<v[k]<<endl;
                                cnt++;
                                break;
                            }
                        }if(cnt) break;
                    } if(cnt) break;
                }
                if(cnt==0)
                cout<<"NO"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}