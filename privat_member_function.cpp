#include <bits/stdc++.h>

using namespace std;
class human{
private: 
int age;   //private declaration of a variable
string name;
public:
void setage(int value,string Name);     //excessing private variable using public function
void display();     //display the result

    };
    
void human :: display(){
    cout<<age<<endl;
    cout<<name;                    //excessing member outside class
}
void human :: setage(int value,string Name){
    age=value;
    name=Name;
}
int main() {
    human first;
    first.setage(24,"Vishal");
    first.display();
    
}
