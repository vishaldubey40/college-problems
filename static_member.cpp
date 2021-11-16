#include <bits/stdc++.h>

using namespace std;
class human{
   public:
   static int human_count; //we cant intialise here
   human(){
       ++human_count;
   }
   void display(){
       cout<<"member is called "<<human_count<<" times";
}
    
};

int human::human_count = 0; //declaration of static class member
int main() {
  cout<<human::human_count<<endl;  //static member can be called without creating object
  human anil;
  human vishal;
  human naman;
  human navin;
  anil.display();
  cout<<human::human_count<<endl;
  }
