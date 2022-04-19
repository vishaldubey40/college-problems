#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int x = a/(b+1);
        int y = a%(b+1);
        for(int i=0;i<y;i++)    cout<<string(x+1,'R')<<'B';
    for(int i=y;i<b;i++)    cout<<string(x,'R')<<'B';
    cout<<string(x,'R');
    // cout << t;
    // for(int i=0;i<y;i++) cout << string(x+1,'R')<<'B';
   cout<<endl; }
}