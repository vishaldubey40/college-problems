#include<bits/stdc++.h>

using namespace std;
const long long int N = 9e7 +7;
bool v[N] = {0};
vector<long long int> a;
void prime(){
    for(long long int i=2;i*i<N;i++){
        if(v[i]==0){
            for(long long int j=i*i;j<N;j+=i){
                v[j] = 1;
            }
        }
    }
    for(long long int i=2;i<N;i++){
        if(!v[i])
        a.push_back(i);
    }
}

int main(){
    int t;
    cin >> t;
    prime();    
    while(t--){
        int n;
        cin >> n;
        cout<<a[n-1]<<endl;;
    }
}