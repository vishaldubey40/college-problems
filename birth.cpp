#include <iostream>
using namespace std;
class partner
{public:
int n; void findpartner()
{  cin>>n;
   int k=n%8;
   string t;
   if(k==1||k==4){
       t="LB";
   }else if(k==2||k==5){
       t="MB";
   }else if(k==3||k==6){
       t="UB";
   }
    if(k==0){
       n=n-1;
        t="SL";
   }else    if(k<=3){
       n=n+3; }else if(k==7){
       n=n+1;
         t="SU";
   }else    n=n-3;
  cout<<n<<t<<endl;   
}};
int main()
{partner travel;
int t;cin>>t;
while(t--){
travel.findpartner();
}	return 0;
}
