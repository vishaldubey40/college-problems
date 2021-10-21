#include <iostream>
using namespace std;
int main()
{int angle1,angle2,angle3,sumofangles;
cin>>angle1>>angle2>>angle3;
if(angle1>0){
    if(angle2>0){
        if(angle3>0){
            sumofangles=angle3+angle2+angle1;
        }
    }
}

if(sumofangles==180){
    cout<<"Angles are valid";
}else
cout<<"Angles are not valid";

	return 0;
}
