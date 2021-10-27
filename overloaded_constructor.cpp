#include <bits/stdc++.h>

using namespace std;
class human{
    private:
    int age;
    string name;
    public:
    human(){
        cout<<"default constructor"<<endl;
        age=0;
        name="no name";
    }
    human(string iname,int iage){
        cout<<"overloaded constructor"<<endl;
        name=iname;
        age=iage;
    }
    void display(){
        cout<<name<<endl<<age;
    }
};
int main() {
   human anil("vishal",24);
   anil.display();
    
}
