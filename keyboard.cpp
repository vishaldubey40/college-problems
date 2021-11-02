#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int k=s1.length(),j=s2.length();
        int arr[j];
        int t1=0,sum=0;
        for(int i=0;i<j;i++){
            for(int p=0;p<k;p++){
                if(s2[i]==s1[p]){
                    arr[t1]=p;
                    t1++;
                }
            }
        }
        for(int i=0;i<j-1;i++){
            sum+=abs(arr[i]-arr[i+1]);
        }
        cout<<sum<<endl;
    }
}
