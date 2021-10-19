#include <bits/stdc++.h>
using namespace std;
int main()
{
float celsius, fahrenheit;
cin>>fahrenheit;
celsius=(fahrenheit-32);
celsius*=5;
celsius/=9;
if(celsius>=150){
    printf("%.2f Centigrade\nVery Hot",celsius);
    
}else if(celsius>=100){
    printf("%.2f Centigrade\nHot",celsius);
}else
cout<<fixed<<setprecision(2)<<celsius<<" Centigrade\n"<<"Moderate";

	return 0;
}
