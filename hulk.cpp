#include <iostream>

using namespace std;

int main() {
int t,count=0;
cin>>t;
int n=0,p=t;
n++;
while(t--){
    if(n%2!=0){
        cout<<"I hate ";
        if(t==0){
            cout<<"it";
        }
    else{
        cout<<"that ";
    }
    }else{
        cout<<" I love ";
        if(t==0){
            cout<<"it";
        }
    else{
        cout<<"that ";
    }
    }
    n++;
}

}
