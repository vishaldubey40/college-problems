#include <bits/stdc++.h>

using namespace std;
 class father{
      public:
      int height;
   void askfather(){
         cout<<" what you want i am ur father "<<endl;
     }
     
 };
  class mother{
      public:
      string colour;
 void askmother(){
         cout<<" what you want i am your mother"<<endl;
     }
     
 };
 class child : public father,public mother{
     public:
      void askparents(){
          cout<<"am asking my parents";
      }
      void setcolorandheight(string color,int iheight){
       height=iheight;
       colour=color;
      }
      void display(){
          cout<<height<<endl<<colour;
      }
 };

int main() {
child vishal;
vishal.setcolorandheight("black",6);
vishal.display();
vishal.askfather();
vishal.askmother();
 return 0;
}
