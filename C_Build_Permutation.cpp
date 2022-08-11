#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n+1);
        int k = n-1 ;
        int sq = k*2;
        sq=sqrt(sq);
        sq*=sq;
        map<int , int> m;
        while(k>=0){
            // cout<<k<<" "<<sq<<endl;
            int j ,temp;
            // cout<<v[sq]<<" "<<endl;;
            if(v[sq-k]){
                sq=sqrt(sq);
            sq--;
            sq*=sq;
                // cout<<sq<<endl;
                }
                j=sq;
            m[k]=abs(j-k);
            v[abs(j-k)]=1;
             temp = m[k];
            
            k--;
                temp++;
                // }

            while(temp<n&&!v[temp]){
                m[k]=temp;
                v[temp]=1;
                k--;
                temp++;
            }
            sq=sqrt(j);
            sq--;
            sq*=sq;
        }
        if(!v[0])
        m[0]=0;
        for(auto it:m)
        cout<<it.second<<" ";
        cout<<endl;
    }
}