#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >>k;
        string s1, s2;
        cin >> s1 >> s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        // cout<<s1<<" "<<s2<<endl;
        string c = "";
        // while(!s1.empty()||!s2.empty()){
        //     for(int i=0)
        // }
        // int j1 = min(n,m);
        int j=0, ja = 0;
        int i=0,p=0;
        // int a1 = n, a2 = m;
        while(1){
            if((s1[i]<s2[p]||ja==k)&&j<k){
                c+=s1[i];
                j++;
                ja=0;
                i++;
                // cout<<c<<endl;
            }else{
                if(ja<k){
                    c+=s2[p];
                    ja++;
                    j=0;
                    p++;
                    // cout<<c<<endl;
                }
            }
            if(i==n||p==m)
            break;
        }
        cout<<c<<endl;
        
        
    }
}