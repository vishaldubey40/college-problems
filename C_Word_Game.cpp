#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<string,int> m,m1,m2,m3;
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            m[s] = 1;
            m3[s]=1;
        }
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            m1[s] = 1;
            m3[s]=1;
        }
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            m2[s] = 1;
            m3[s]=1;
        }
        int a=0,b=0,c=0;
        for(auto it: m3){
            if(m[it.first]==1&&m2[it.first]==1&&m1[it.first]==1)
            continue;
           else if(m[it.first]==1&&m2[it.first]==1&&m1[it.first]!=1)
            {
                a++;
                c++;
            }else if(m[it.first]!=1&&m2[it.first]==1&&m1[it.first]==1){
                b++;
                c++;
            }else if(m[it.first]==1&&m2[it.first]!=1&&m1[it.first]==1){
                a++;b++;
            }
            if(m[it.first]==1&&m1[it.first]!=1&&m2[it.first]!=1)
            a+=3;
             if(m[it.first]!=1&&m1[it.first]==1&&m2[it.first]!=1)
            b+=3;
             if(m[it.first]!=1&&m1[it.first]!=1&&m2[it.first]==1)
            c+=3;

        }
        cout<<a<<" "<<b<<" "<<c<<endl;
        
    }
}