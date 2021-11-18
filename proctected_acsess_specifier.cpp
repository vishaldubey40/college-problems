#include <bits/stdc++.h>

using namespace std;
class human{
    protected:
    string name;
    int age;
    public:
    void setname(string iname){name=iname; }
void setage(int iage){age=iage; }
    };
class student : public human{
    public: 
     void display(){
cout<<name<<age<<endl;
}
};
int main() {
  student hi;
  hi.setname("vishal");
  hi.setage(12);
hi.display();
    
}
