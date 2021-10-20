#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,count=0,j=0,max=0,i1;
        cin>>a>>b;
        string s;
        cin>>s;
        for(int i=0;i<30;i++){
            if(s[i]=='1')
                count++;
        } int i=0;
        while(i<30){j=0;
            while(s[i]=='1'){
                j++;
              //  cout<<j<<endl;
                if(j>max){
                    max=j;
                   
                }
                i++;}
                i++;
                          
        
        }
   cout<<(a*count)+(max*b)<<endl;
   
}
}