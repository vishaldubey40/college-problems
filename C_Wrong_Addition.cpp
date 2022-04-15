#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int n, m, i, j;
        vector<int> v;
        vector<int> v1;  
        vector<int> v2;

        n = a.length();
        m = b.length();
        for(int k=0;k<m;k++)
        v1.push_back(b[k]-48);
                i=n-1;j=m-1;
        while (i>=0&&j>=0)
        {
         if((b[j]-48)-(a[i]-48)<0){
          int temp = 10*1 + (b[j]-48);
          int h = temp - (a[i] -48);
          v.push_back(h);
          j=j-2;
          i--;
        }else{
            int h =(b[j]-48)-(a[i]-48);
            v.push_back(h);
            i--;
            j--;
        }
        }
        while(j>=0)
        {
        v.push_back(b[j]-48);
        j--;
        }
        int jn = v.size() - 1;
        while(v[jn]==0){
            v.pop_back();
            jn--;
        }
        reverse(v.begin(),v.end());
        

        int q=n-1,w=v.size()-1;
        
        while(q>=0&&w>=0){
            int vd = (a[q] - 48)+v[w];
            
            if(vd>9){
                int gf = vd;
                v2.push_back(gf%10);
                v2.push_back(gf/10);
                
            }else
            v2.push_back(vd);
            q--;
            w--;
        }
        while(q>=0){
            v2.push_back(a[q]-48);
            q--;
        }
        while(w>=0){
            v2.push_back(v[w]);
            w--;
        }
        
        int cnt=0;
        reverse(v2.begin(),v2.end());
        for(int ia=0;ia<m;ia++){
            if((b[ia]-48)==v2[ia])
            cnt++;
           
        }
        
        if(cnt==m&&v2.size()==b.length())
        {
            for(auto it:v)
            cout<<it;
            cout<<endl;
        }else
        cout<<"-1"<<endl;
        
    }
}