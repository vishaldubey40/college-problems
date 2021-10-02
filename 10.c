#include<bits/stdc++.h>
using namespace std;
int main() {
float b,leftside,rs1,rs2;
cin>>b>>leftside;
rs1=sqrt((leftside*leftside)-(b*b));
rs2=sqrt((leftside*leftside)+(b*b));
cout<<fixed<<setprecision(5)<<rs1<<" "<<fixed<<setprecision(5)<<rs2;
    return 0;
}
