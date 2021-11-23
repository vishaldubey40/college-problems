#include<iostream>
using namespace std;
int main() {
   long long int t;
    cin>>t;
    while(t--){
       long long int a,b;
        cin>>a>>b;
      long long  int i,j;
        i=b%4;
        j=b-i;
        while(i--){
            j++;
            if(a%2==0){
                a-=j;
            }else
            a+=j;
        }
        cout<<a<<endl;
    }
}
