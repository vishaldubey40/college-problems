#include <iostream>
using namespace std;
class Salary
{ public:
void Increment(int a){
    cout<<a<<endl;
}
void Increment(int a,int b){
    cout<<a+b<<endl;
}
    
};
int main()
{
Salary empsal;
int cursal,bonus;
cin>>cursal;
empsal.Increment(cursal);
cin>>cursal>>bonus;
empsal.Increment(cursal,bonus);

	return 0;
}
