#include<stdio.h>
#include<conio.h>
int main()
{ int a,b,c;
clrscr();
printf("Enter three numbers ");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c)){
printf("%d is a largest number",a);
}
else
if((b>a)&&(b>c)){
printf("%d is a largest number",b);
}
else
{
printf("%d is a largest number",c);
}
getch();
return 0;
}
