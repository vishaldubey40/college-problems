#include <bits/stdc++.h>
using namespace std;

class Appraisal
{ public:
int sal;
    Appraisal(){sal=30000;cout<<"Old Salary:"<<sal<<endl;}
   

void nesalary(int al){
    cout<<"New Salary:"<<al<<endl;
}
Appraisal(int sal){
    cout<<"You have the Hike of Rs."<<sal;
}
};

int main()
{
Appraisal oldsalary;
int al;
cin>>al;
oldsalary.nesalary(al);
int sal=abs(30000-al);
Appraisal newsalary(sal);
//newsalary.pewsalary(sal);
	return 0;
}
