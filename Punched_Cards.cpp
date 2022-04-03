#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
        int k = 0;
    while(t--){
        int n, m ;
        cin >> n >> m;
        k++;
        cout <<"Case #"<<k<<":"<<endl;
        cout <<"..";
        for(int i=0;i<(2*m-1);i++){
            if(i%2==0){
                cout <<"+";
            }else
            cout<<"-";
        }cout<<endl;
        cout <<"..";
        for(int i=0;i<(2*m-1);i++){
            if(i%2==0){
                cout <<"|";
            }else
            cout<<".";
        }cout<<endl;
        for(int i=2;i<2*n+1;i++){
            for(int j=0;j<2*m+1;j++){
                if(i%2==0){
                    if(j%2==0){
                        cout <<"+";
                    }else
                    cout <<"-";
                }else{
                    if(j%2==0){
                        cout <<"|";
                    }else
                    cout <<".";
                }
            }cout << endl;
        }
    }
    return 0;
}