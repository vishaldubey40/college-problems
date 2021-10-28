#include <iostream>
using namespace std;
class GoodNum
{   public:
    int N,count=0;
    void check(int N){
        int j;
        while(N){
            j=N%10;
            if(j==0){
                count++;
            }
            N=N/10;
        }
    }
  };
int main()
{  GoodNum Learning;
   int N;
   cin>>N;
   Learning.check(N);
  if(Learning.count>0){
      cout<<Learning.count;
  }else
  cout<<"GOOD Number";

	return 0;
}
