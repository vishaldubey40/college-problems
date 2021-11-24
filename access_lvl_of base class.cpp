#include <bits/stdc++.h>

using namespace std;
 class human{
     protected:
     string name;
     public:
     void hello(){
         cout<<"Kaise hai sir"<<endl;
     }
 };
 class student : private human{
     public:
     human :: name;  //converting name from private to public
     human :: hello; //converting hello from private to pulbic using scope resolution operator
     void display(){
         cout<<name;
     }
 };

int main() {
 student vishal;
 vishal.name="My name is Vishal Dubey";
 vishal.hello();
vishal.display();
return 0;
}
