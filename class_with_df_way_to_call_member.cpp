#include <bits/stdc++.h>

using namespace std;
class vishal{
    public :
    int t;
    void hello(){
        cout<<"hi my name is vishal dubey";
    }
};
int main() {
   vishal data;
   data.hello();
   data.t=4;
   cout<<data.t<<endl;
   vishal *dubey= new vishal();
   dubey->t=4;
   cout<<dubey->t;
   dubey->hello();
   
}
