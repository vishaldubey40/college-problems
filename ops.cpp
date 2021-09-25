#include <bits/stdc++.h>


using namespace std;

class employee{
    public:
    string name;
    string company;
    int age;
    void introduceyourself(){
        cout<<"Name -"<<name<<endl;
        cout<<"company -"<<company<<endl;
        cout<<"age -"<<age<<endl;
    }
    employee(string Name,string Company,int Age){     //constructor with 3 arguments
        name=Name;
        company=Company;
        age=Age;
        
    }
    };

int main() {
  employee employee1 = employee("Vishal Dubey","Google",20);
//   employee1.name="vishal dubey";
//   employee1.company="GOOGLE";
//   employee1.age=18;
  employee1.introduceyourself();
  //constructor does not have a return type
  //constructor have same name as a class
}
