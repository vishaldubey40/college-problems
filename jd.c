#include <stdio.h>
#include <math.h>
int main(){
float b,ls,rs1,rs2;
scanf("%f %f",&b,&ls);
b=b*b;
ls=ls*ls;
rs1=sqrt(ls-b);
rs2=sqrt(ls+b);
printf("%.5f %.5f",rs1,rs2);
return 0;}
