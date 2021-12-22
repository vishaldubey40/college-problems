#include <iostream>

using namespace std;

int main() {
int t,count=0;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a<b&&(b-a)>=2){
        count++;
    }
}
cout<<count<<endl;
}
