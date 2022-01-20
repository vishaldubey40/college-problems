#include <iostream>
using namespace std;
class Employee{
    public:
    int a,b,c,d,e,p;
    string s,s1;
    
};
class Salary : public Employee{
    public:
    void getEmpDetails(){
        cin>>a>>s>>s1;
    }
    void getPayDetails(){
        cin>>b>>c>>d>>e;
    }
    void calculate(){
        p=b+c+d-e;
    }
    void display(){
        cout<<"Employee Number:"<<a<<"\nEmployee Name:"<<s<<"\nEmployee Role:"<<s1<<"\nEmployee Net Pay:"<<p;
    }
};
int main()
{Salary s;
s.getEmpDetails();
s.getPayDetails();
s.calculate();
s.display();
	return 0;
}
