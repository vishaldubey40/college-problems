#include<stdio.h>
#include<conio.h>
void swap(int &a,int &b){
int c;
c=a;
a=b;
b=c;
printf("after swap \nvlaue of a is %d\nvlaue of b is %d\n",a,b);
}
int main()
{ int a,b;
clrscr();
printf("Enter values of a and b\n ");
scanf("%d%d",&a,&b);
printf("Before swap\nvlaue of a is %d\nvlaue of b is %d\n",a,b);
swap(a,b);
getch();
return 0;
}