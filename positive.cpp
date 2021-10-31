#include <iostream>
using namespace std;
class AccBalance
{ public:
AccBalance(){cout<<"Zero Balance"<<endl;}
   
   AccBalance(int Balance){if(Balance>0)cout<<"Has a Positive Balance";else if(Balance<0) cout<<"Has a Negative Balance";else cout<<"Has a Zero Balance";}
    };
    int main()
{
AccBalance defltBal;
int balance;
cin>>balance;
AccBalance currBal(balance);

	return 0;
}
