#include <bits/stdc++.h>

using namespace std;
class human{
    public:
    string name;
    int age;
    void setname(string iname){name=iname; }
void setage(int iage){age=iage; }
    
};
class student : public human{
    public: 
    int id;
    void setid(int iid ){ id=iid;}
  void display(){
      
    cout<<name<<age<<id<<endl;
}
};
int main() {
  student hi;
  hi.setname("vishal");
  hi.setage(12);
  hi.setid(4);
hi.display();
    
}
