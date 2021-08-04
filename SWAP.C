#include<stdio.h>
#include<conio.h>
int main()
{ clrscr();
 int a,b,c;
 printf(" Enter the value of a and b");
 scanf("%d%d",&a,&b);
 printf("Before swap \n value of a is %d \n value of b is %d\n",a,b);
c=a;
a=b;
b=c;
printf("After swap \n value of a is %d \n value of b is %d\n",a,b);
getch();
return 0;
}