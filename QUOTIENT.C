#include<stdio.h>
#include<conio.h>

int main()
{       clrscr();
int a,b,quotient,remainder;
printf("ENTER THE NUMBER AND NUMBER BY WHICH IT SHOULD BE DIVIDED:");
scanf("%d%d",&a,&b);
quotient=a/b;
remainder=a%b;
printf("quotient  is %d and remainder is %d",quotient,remainder);
getch();
}