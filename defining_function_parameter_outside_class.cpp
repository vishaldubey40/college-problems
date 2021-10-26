#include <bits/stdc++.h>

using namespace std;
class Human{
    public:
    int data;
    string name;
    void introduce();  //we are not passing any value as a arguments just calling the function
};
void Human :: introduce(){                           //parameters of functions declared outside of class
    cout<<Human ::name<<" "<<Human::data;
}
    int main() {
   Human first;
   Human *second = new Human();
   first.name="Vishal";
   first.data=50;
   first.introduce();
   second->name = "Dubey";
   second->data = 4;
   second->introduce();
}
