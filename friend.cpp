#include <bits/stdc++.h>

using namespace std;
class human{
    string name;
    int age;
    public:
    human (string iname,int iage){
        name=iname;
        age=iage;
    }
    void tellme(){
        cout<<name<<endl<<age<<endl;
    }
    friend void display(human man);
};
void display(human man){
    cout<<man.name<<endl<<man.age<<endl;
}
int main() {
  human hi("Vishal",23);
  display(hi);
}
