#include <bits/stdc++.h>

using namespace std;
class human{
    private:
    string *name;
    int *age;
    public:
    human(string iname,int iage){
      name= new string;
      age = new int;
      *name=iname;
        *age=iage;
    }
    void display(){
        cout<<"Myname is "<<*name<<" and age is "<<*age;
    }
    ~human(){
        delete name;
        delete age;
        cout<<"memory is released"<<endl;
    }
};
int main() {
  human *anil = new human("vishal",19);   
  anil->display();
  delete anil; //destructor is called and memkry is released
}
