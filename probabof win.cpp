#include <iostream>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    float k=x+y,count=0;
    for(int i=1;i<=6;i++){
        if(i>k){
            count++;
        }
    }
    float probab;
    probab=count/6;
    cout<<probab<<endl;
}
    
}
