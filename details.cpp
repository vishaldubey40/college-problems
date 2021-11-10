#include <iostream>
using namespace std;
class house
{public:
  string s,cty,state;
  int hno,l,b,h,n=1,t;
    void input();
    void display();
    
};
void house::input()
{
    cin>>s;
    cin>>hno>>cty>>state;
cin>>t;
    cout<<"House name="<<s<<"\nHouse No="<<hno<<"\nCity="<<cty<<"\nState="<<state;

}
void house::display()
{ cin>>l>>b>>h;
cout<<"\nDetail of Room "<<n<<"\nLength="<<l<<"\nBreadth="<<b<<"\nHeight="<<h;
 }
int main()
{   house all;
 all.input();
   while(all.n<=all.t){
   all.display();
   all.n++;}
	return 0;
}
