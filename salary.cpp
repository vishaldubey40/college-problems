#include <iostream>
using namespace std;
class Salary
{public:
int deftsalary;
Salary(){deftsalary=10000;cout<<deftsalary<<endl;}

    Salary(int sal){
        cout<<sal<<endl;
    }

};
int main()
{  Salary hi;
    int sal;
cin>>sal;
Salary ExpectedSalary(sal);


	return 0;
}
