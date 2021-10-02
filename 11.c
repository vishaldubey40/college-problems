#include <iostream>
using namespace std;
int main()
{  int number;
  cin>>number;
  int k=number,sum=0,a;
  while(k){
      a=k%10;
      sum+=(a*a*a);
      k=k/10;
  }
  if(sum==number){
      cout<<"Part of Memorable Coin";
  }else
  cout<<"Not a Part of Memorable Coin";

	return 0;
}
